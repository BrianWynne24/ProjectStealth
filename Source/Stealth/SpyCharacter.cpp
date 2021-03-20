// Fill out your copyright notice in the Description page of Project Settings.


#include "SpyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "WeaponTaser.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Util.h"

ASpyCharacter::ASpyCharacter()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewCharacterMesh(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	if (NewCharacterMesh.Object != NULL)
	{
		CharacterMesh = NewCharacterMesh.Object;
		Util::Debug("Assigned Skeleton - Spy");
	}

	StartingWeaponClass = AWeaponTaser::StaticClass();

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

void ASpyCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	TickHangTrace(deltaSeconds); 
}

void ASpyCharacter::TickHangTrace(float deltaSeconds)
{
	FHitResult forwardHit, aboveHit;
	bool forwardHang = HangForwardTrace(forwardHit);
	bool aboveHang = HangAboveTrace(aboveHit);

	if (!forwardHang || !aboveHang)
		return;

	bHanging = true;

	FVector forwardHitLocation = forwardHit.Location;
	FVector aboveHitLocation = aboveHit.Location;

	FVector socketLocation = GetActorLocation() + FVector(0, 0, 50);

	FMovementProperties movementProperties = FMovementProperties();
	movementProperties.bCanCrouch = false;
	movementProperties.bCanFly = true;
	movementProperties.bCanJump = true;
	movementProperties.bCanSwim = false;
	movementProperties.bCanWalk = false;

	GetMovementComponent()->MovementState = movementProperties;
	//Util::Debug("Hanigng");
}

bool ASpyCharacter::HangForwardTrace(FHitResult& hitDetails)
{
	UWorld* World = GetWorld();

	FVector startLoc, endLoc;
	startLoc = GetActorLocation() + FVector(0, 0, 50);
	endLoc = startLoc + (FollowCamera->GetForwardVector() * 150); //Length

	FCollisionQueryParams traceParams(FName(TEXT("InteractTrace")), true, this);
	//traceParams.bTraceComplex = true;

	World->DebugDrawTraceTag = FName("InteractTrace");

	bool hitResult = World->LineTraceSingleByChannel(
		hitDetails,
		startLoc,
		endLoc,
		ECC_Visibility,
		traceParams
	);

	return hitResult;
}

bool ASpyCharacter::HangAboveTrace(FHitResult& hitDetails)
{
	UWorld* World = GetWorld();

	float height = GetDefaultHalfHeight() * 2;
	FVector startLoc, endLoc;
	startLoc = GetActorLocation() + FVector(0, 0, (height+10));
	startLoc += (FollowCamera->GetForwardVector() * 150);

	endLoc = startLoc - FVector(0, 0, height*1.3);

	FCollisionQueryParams traceParams(FName(TEXT("TopInteractTrace")), true, this);
	//traceParams.bTraceComplex = true;

	World->DebugDrawTraceTag = FName("TopInteractTrace");

	bool hitResult = World->LineTraceSingleByChannel(
		hitDetails,
		startLoc,
		endLoc,
		ECC_Visibility,
		traceParams
	);

	return hitResult;
}

void ASpyCharacter::EquipWeapon(UClass* weaponClass)
{
	/*if (CurrentWeapon != NULL)
		CurrentWeapon->Destroy();

	CurrentWeapon = (AWeaponBase*)GetWorld()->SpawnActor(weaponClass);
	CurrentWeapon->EquipToCharacter(this);*/
}

void ASpyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ASpyCharacter::Jump()
{
	Super::Jump();
}

void ASpyCharacter::StopJumping()
{
	Super::StopJumping();
	bHanging = false;
}