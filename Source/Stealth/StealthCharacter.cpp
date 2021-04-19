// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Blueprint/UserWidget.h"
#include "Gadgets/GadgetBase.h"
#include "WeaponBase.h"
#include "Util.h"
#include "PlayerSpawnPoint.h"
#include "StealthUserWidget.h"
#include "StealthGameState.h"
#include "Engine.h"
#include "Net/UnrealNetwork.h"

//////////////////////////////////////////////////////////////////////////
// AStealthCharacter

AStealthCharacter::AStealthCharacter()
{
	static ConstructorHelpers::FObjectFinder<UClass> AnimBlueprint(TEXT("AnimBlueprint'/Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP_C'"));
	if (AnimBlueprint.Object != NULL)
		AnimationClass = AnimBlueprint.Object;

	StartingWeaponClass = AWeaponBase::StaticClass();

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->bRunPhysicsWithNoController = true;

	//Configure Camera
	ViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ViewCamera"));
	ViewCamera->SetupAttachment(RootComponent);

	// Configure ViewModel Attachment for weapon
	WeaponViewModelAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("ViewModelAttachment"));
	WeaponViewModelAttachment->SetupAttachment(ViewCamera);

	FVector relLoc = FVector(30, 25, -24);
	WeaponViewModelAttachment->SetRelativeLocation(relLoc);

	FRotator relRot = FRotator(0, -90, 0);
	WeaponViewModelAttachment->SetRelativeRotation(relRot);

	SetReplicates(true);
	SetReplicateMovement(true);
	bAlwaysRelevant = true;

	// Custom variables
	Health = 100.f;

	Gadgets = TArray<UGadgetBase*>();
	Gadgets.SetNum(4, true);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AStealthCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &AStealthCharacter::PrimaryAttackBegin);
	PlayerInputComponent->BindAction("Attack1", IE_Released, this, &AStealthCharacter::PrimaryAttackEnd);

	PlayerInputComponent->BindAxis("MoveForward", this, &AStealthCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AStealthCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AStealthCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AStealthCharacter::LookUpAtRate);
}

void AStealthCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AStealthCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AStealthCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AStealthCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void AStealthCharacter::OnRep_CharacterMesh()
{
	GetMesh()->SetSkeletalMesh(GetSkeletalMesh());
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(AnimationClass);

	// This is so the skeletal mesh does not float in the air
	float rootHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	GetMesh()->SetWorldLocation(GetCapsuleComponent()->GetComponentLocation() - FVector(0, 0, rootHeight));
	GetMesh()->SetWorldRotation(FRotator(0, 270, 0));

	BaseTranslationOffset = FVector(0, 0, -rootHeight);
	BaseRotationOffset = FRotator(0, 270, 0).Quaternion();

	CharacterMesh = InitCharacterMesh;
}

void AStealthCharacter::ServerSetCharacterMesh_Implementation()
{
	float rootHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	GetMesh()->SetWorldLocation(GetRootComponent()->GetComponentLocation() - FVector(0, 0, rootHeight));

	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	SetActorEnableCollision(true);

	CharacterMesh = InitCharacterMesh;

	// For bullet traces
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel14, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel14, ECollisionResponse::ECR_Block);

	if (GetNetMode() == NM_ListenServer)
		OnRep_CharacterMesh();
}

void AStealthCharacter::BeginPlay()
{
	Super::BeginPlay();

	ServerBeginPlay();

	if (GetSkeletalMesh() != nullptr)
		ServerSetCharacterMesh();

	//ClientSpawnHUD();
}

void AStealthCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);
}

void AStealthCharacter::ServerBeginPlay_Implementation()
{
	SetActorEnableCollision(false);
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
	SetOwner(GetController());

	/*if (HUDClass != nullptr)
	{
		ClientSpawnHUD();
	}*/
}

void AStealthCharacter::OnRep_CurrentWeapon()
{
	CurrentWeapon->ClientAttach();
}

void AStealthCharacter::OnRep_Health()
{

}

void AStealthCharacter::PrimaryAttackBegin()
{
	if (GetCurrentWeapon() == nullptr)
		return;

	GetCurrentWeapon()->ShootPrimary();
}

void AStealthCharacter::PrimaryAttackEnd()
{
	if (GetCurrentWeapon() == nullptr)
		return;

	GetCurrentWeapon()->StopPrimaryFire();
}

void AStealthCharacter::ServerAddGadget(class UClass* gadgetClass)
{
	// Only 4 gadgets allowed
	if (Gadgets.Num() > 4)
		return;

	UGadgetBase* gadgetItem = NewObject<UGadgetBase>(this, gadgetClass);
	uint8 index = Gadgets.Add(gadgetItem);

	GadgetSelectedIndex = index;

	/*if (GetGadget(0) != nullptr)
		Util::Debug(GetGadget(0)->GetGadgetName());
	else
		Util::Debug(":(");*/
}

UGadgetBase* AStealthCharacter::GetGadget(int gadgetIndex)
{
	UGadgetBase* gadgetItem;
	Gadgets.Find(gadgetItem, gadgetIndex);

	if (gadgetItem != nullptr)
		return gadgetItem;

	return nullptr;
}

void AStealthCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AStealthCharacter, CharacterMesh);
	DOREPLIFETIME(AStealthCharacter, CurrentWeapon);
	DOREPLIFETIME(AStealthCharacter, Health);
}
