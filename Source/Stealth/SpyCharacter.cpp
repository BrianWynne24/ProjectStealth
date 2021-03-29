// Fill out your copyright notice in the Description page of Project Settings.


#include "SpyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "WeaponTaser.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Engine.h"
#include "Net/UnrealNetwork.h"
#include "Util.h"

ASpyCharacter::ASpyCharacter()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewCharacterMesh(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	if (NewCharacterMesh.Object != NULL)
	{
		CharacterMesh = NewCharacterMesh.Object;
		//Util::Debug("Assigned Skeleton - Spy");
	}

	static ConstructorHelpers::FObjectFinder<UAnimSequence> hangAnimation(TEXT("/Game/Stealth/Spy/Animation/Hang_to_Crouch_fixed"));
	if (hangAnimation.Object != NULL)
		AnimationHang = hangAnimation.Object;

	StartingWeaponClass = AWeaponTaser::StaticClass();

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	bHanging = false;
	HangCooldown = 0.f;
	//bAlwaysRelevant = true;
}

void ASpyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(ASpyCharacter, bHanging);
}

void ASpyCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	if (IsLocallyControlled())	// Only call on our client to do the heavy lifting
		TickHangTrace(deltaSeconds); 
}

void ASpyCharacter::TickHangTrace(float deltaSeconds)
{
	if (OnGround() || bHanging || !CanHang())
		return;

	FHitResult hitTarget = TraceClimbForward();
	if (!hitTarget.IsValidBlockingHit())
		return;

	hitTarget = TraceClimbTop();
	if (!hitTarget.IsValidBlockingHit())
		return;

	ServerStartHang();
}

void ASpyCharacter::ServerStartHang_Implementation()
{
	if (OnGround() || bHanging || !CanHang())
		return;

	FHitResult forwardHit = TraceClimbForward();
	if (!forwardHit.IsValidBlockingHit())
		return;

	FHitResult upperHit = TraceClimbTop();
	if (!upperHit.IsValidBlockingHit())
		return;

	bHanging = true;

	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
	GetCharacterMovement()->StopMovementImmediately();

	FVector currentLoc = GetActorLocation();
	currentLoc.Z = upperHit.ImpactPoint.Z;
	currentLoc.Z -= (GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - 15); // Offset the height a wee-bit
	SetActorLocation(currentLoc);

	/*if (HasAuthority() && GetNetMode() == NM_ListenServer) // ListenServer support
	{
		SetActorRotation(forwardHit.Normal.Rotation() - FRotator(0, 180, 0));
		GetMesh()->PlayAnimation(AnimationHang, false);
		GetMesh()->SetPlayRate(0);
	}*/
	MulticastStartHang(forwardHit.Normal, upperHit.Normal);
}

void ASpyCharacter::ServerCancelHang_Implementation()
{
	bHanging = false;
	StartHangCooldown();
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);

	/*if (HasAuthority() && GetNetMode() == NM_ListenServer) // ListenServer support
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);*/
	MulticastCancelHang();
}

void ASpyCharacter::MulticastStartHang_Implementation(FVector forwardHit, FVector upperHit)
{
	bHanging = true;
	SetActorRotation(forwardHit.Rotation() - FRotator(0, 180, 0));

	GetMesh()->PlayAnimation(AnimationHang, false);
	GetMesh()->SetPlayRate(0);
}

void ASpyCharacter::MulticastCancelHang_Implementation()
{
	bHanging = false;
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
}

/*void ASpyCharacter::OnRep_Hanging()
{
	if (bHanging)
	{
		FHitResult forwardHit = TraceClimbForward();
		SetActorRotation(forwardHit.Normal.Rotation() - FRotator(0, 180, 0));
		GetMesh()->PlayAnimation(AnimationHang, false);
		GetMesh()->SetPlayRate(0);
	}
	else
	{
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	}
}*/

FHitResult ASpyCharacter::PerformLineTrace(FVector startLoc, FVector endLoc)
{
	UWorld* World = GetWorld();

	FCollisionQueryParams traceParams(FName(TEXT("ClimbTrace")), true, this);
	World->DebugDrawTraceTag = FName("ClimbTrace");

	FHitResult hitDetails;
	bool hitResult = World->LineTraceSingleByChannel(
		hitDetails,
		startLoc,
		endLoc,
		ECC_Visibility,
		traceParams
	);

	return hitDetails;
}

FHitResult ASpyCharacter::PerformLineTrace(FVector endLoc)
{
	FVector startLoc = GetActorLocation();
	return PerformLineTrace(startLoc, endLoc);
}

FHitResult ASpyCharacter::TraceClimbForward()
{
	FVector endLoc = GetActorLocation() + (GetActorForwardVector() * 150); //Length
	return PerformLineTrace(endLoc); // Check forward
}

FHitResult ASpyCharacter::TraceClimbTop()
{
	FVector startLoc, endLoc;

	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	endLoc += GetActorLocation() + (GetActorForwardVector() * 50); //Length
	startLoc = endLoc + FVector(0, 0, capsuleHeight * 1.3);

	return PerformLineTrace(startLoc, endLoc); // Check above
}

bool ASpyCharacter::OnGround()
{
	FVector startLoc, endLoc;

	startLoc = GetActorLocation();

	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	endLoc = startLoc - (FVector(0, 0, capsuleHeight+5));

	FHitResult lineTrace = PerformLineTrace(startLoc, endLoc);
	if (lineTrace.IsValidBlockingHit())
		return true;

	return false;
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

void ASpyCharacter::MoveForward(float Value)
{
	if (bHanging)
		return;

	Super::MoveForward(Value);
}

void ASpyCharacter::MoveRight(float Value)
{
	if (bHanging)
		return;

	Super::MoveRight(Value);
}

void ASpyCharacter::Jump()
{
	if (bHanging)
	{
		ServerCancelHang();
		return;
	}

	Super::Jump();

	//TickHangTrace(0);
}

bool ASpyCharacter::CanHang()
{
	if (GetGameTimeSinceCreation() > HangCooldown)
		return true;

	return false;
}

void ASpyCharacter::StartHangCooldown()
{
	HangCooldown = GetGameTimeSinceCreation() + 1.0f;
}

void ASpyCharacter::StopJumping()
{
	Super::StopJumping();
}

void ASpyCharacter::BeginPlay()
{
	Super::BeginPlay();
}