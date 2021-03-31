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
		InitCharacterMesh = NewCharacterMesh.Object;
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

	DOREPLIFETIME(ASpyCharacter, bHanging);
	DOREPLIFETIME(ASpyCharacter, bClimbing);
}

void ASpyCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	if (IsLocallyControlled())	// Only call on our client to do the heavy lifting
	{
		TickHangTrace(false);

		if (!InputEnabled() && GetGameTimeSinceCreation() > ClimbCooldown) // Anti-spam
		{
			APlayerController* playerController = (APlayerController*)GetController();
			EnableInput(playerController);
		}
	}

	// We need the server to check to hang if the player is moving right or left
	// This will prevent the player from sliding past the wall
	// Also added support for ListenServers
	if ((GetRemoteRole() == ENetRole::ROLE_Authority || GetNetMode() == NM_ListenServer) && bHanging && !bClimbing)
	{
		APlayerController* playerController = (APlayerController*)GetController();
		if (playerController == nullptr)
			return;

		float moveRight = playerController->GetInputAxisValue(FName("MoveRight"));
		if (moveRight != 0)
			return;

		FVector currentVelocity = GetVelocity();
		if (currentVelocity.X != 0 || currentVelocity.Y != 0 || currentVelocity.Z != 0)
		{
			ServerStopMovement();
		}
	}
}

TArray<FHitResult> ASpyCharacter::TickHangTrace(bool bIsServer)
{
	if (OnGround() || bHanging || !CanHang())
		return {};

	FHitResult forwardTarget = TraceClimbForward();
	if (!forwardTarget.IsValidBlockingHit())
		return {};

	FHitResult upperTarget = TraceClimbTop();
	if (!upperTarget.IsValidBlockingHit())
		return {};

	if (!bIsServer)
	{
		ServerStartHang();
		return {};
	}

	TArray<FHitResult> hitResults = { forwardTarget, upperTarget };
	return hitResults;
}

void ASpyCharacter::ServerStartHang_Implementation()
{
	TArray<FHitResult> hitResults = TickHangTrace(true);
	if (hitResults.Num() <= 0)	// Server-side check to make sure we are hitting valid points
		return;

	bHanging = true;

	GetCharacterMovement()->StopActiveMovement();
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);

	FVector currentLoc = GetActorLocation();
	currentLoc.Z = hitResults[1].ImpactPoint.Z;
	currentLoc.Z -= (GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - 15); // Offset the height a wee-bit
	SetActorLocation(currentLoc);
	SetActorRotation(hitResults[0].Normal.Rotation() - FRotator(0, 180, 0));

	if (GetNetMode() == NM_ListenServer) // ListenServer support
		OnRep_Hanging();
}

void ASpyCharacter::ServerCancelHang_Implementation()
{
	if (bClimbing)
		return;

	bHanging = false;
	StartHangCooldown();
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);

	if (GetNetMode() == NM_ListenServer) // ListenServer support
		OnRep_Hanging();
}

/*void ASpyCharacter::MulticastStartHang_Implementation(FVector forwardHit, FVector upperHit)
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
}*/

void ASpyCharacter::OnRep_Hanging()
{
	if (bHanging)
	{
		FHitResult forwardHit = TraceClimbForward();
		SetActorRotation(forwardHit.Normal.Rotation() - FRotator(0, 180, 0));
		GetMesh()->PlayAnimation(AnimationHang, false);
		GetMesh()->SetPlayRate(0);

		//APlayerController* playerController = (APlayerController*)GetController();
		//EnableInput(playerController);

		ClimbCooldown = GetGameTimeSinceCreation() + 0.35;
	}
	else
		GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
}

FHitResult ASpyCharacter::PerformLineTrace(FVector startLoc, FVector endLoc, FName traceName)
{
	UWorld* World = GetWorld();

	FCollisionQueryParams traceParams(traceName, true, this);
	World->DebugDrawTraceTag = traceName;

	FHitResult hitDetails;
	bool hitResult = World->LineTraceSingleByChannel(
		hitDetails,
		startLoc,
		endLoc,
		ECC_WorldStatic,
		traceParams
	);

	return hitDetails;
}

FHitResult ASpyCharacter::PerformLineTrace(FVector endLoc, FName traceName)
{
	FVector startLoc = GetActorLocation();
	return PerformLineTrace(startLoc, endLoc, traceName);
}

FHitResult ASpyCharacter::TraceClimbForward()
{
	FVector endLoc = GetActorLocation() + (GetActorForwardVector() * 150); //Length
	return PerformLineTrace(endLoc, TEXT("HangTickForward")); // Check forward
}

FHitResult ASpyCharacter::TraceClimbTop()
{
	FVector startLoc, endLoc;

	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	startLoc = GetActorLocation() + (GetActorForwardVector() * 45);
	startLoc.Z += capsuleHeight;
	endLoc = startLoc;
	endLoc.Z -= capsuleHeight;

	return PerformLineTrace(startLoc, endLoc, TEXT("HangTickTop")); // Check above
}

FHitResult ASpyCharacter::TraceHangMoveRight(bool bLeft)
{
	float dirValue = 40;
	if (bLeft)
		dirValue *= -1;

	FVector startLoc, endLoc;

	startLoc = GetActorLocation() + (GetActorRightVector() * dirValue);
	endLoc = startLoc + (GetActorForwardVector() * 50);

	return PerformLineTrace(startLoc, endLoc, TEXT("RightLeftHangTrace"));
}

void ASpyCharacter::ServerClimbUp_Implementation()
{
	if (!CanClimbUp())
		return;

	//bHanging = false;
	bClimbing = true;
	MulticastClimbUp();
}

void ASpyCharacter::ServerClimbRight_Implementation(bool bLeft)
{
	if (!CanClimbRight(bLeft))
		return;

	float force = 100.f;
	if (bLeft)
		force *= -1;

	GetCharacterMovement()->Velocity = GetActorRightVector() * force;
}

void ASpyCharacter::ServerClimbFinish_Implementation()
{
	FHitResult topHit = TraceClimbTop();
	if (!topHit.IsValidBlockingHit())
		return;

	FVector topLoc = topHit.ImpactPoint;
	topLoc += (GetActorForwardVector() * 40);
	topLoc.Z += 15; //Offset
	SetActorLocation(topLoc);

	GetCharacterMovement()->StopActiveMovement();
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);

	bHanging = false;
	bClimbing = false;
	if (GetNetMode() == NM_ListenServer)
		OnRep_Hanging();
}

void ASpyCharacter::MulticastClimbUp_Implementation()
{
	GetMesh()->PlayAnimation(AnimationHang, false);
	GetMesh()->SetPlayRate(1.0f);
}

bool ASpyCharacter::CanClimbUp()
{
	if (GetGameTimeSinceCreation() > ClimbCooldown)
		return true;

	return false;
}

bool ASpyCharacter::CanClimbRight(bool bLeft)
{
	FHitResult hitResult = TraceHangMoveRight(bLeft);
	return hitResult.IsValidBlockingHit();
}

bool ASpyCharacter::OnGround()
{
	if (bHanging)
		return false;

	FVector startLoc, endLoc;

	startLoc = GetActorLocation();

	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	endLoc = startLoc - (FVector(0, 0, capsuleHeight+5));

	FHitResult lineTrace = PerformLineTrace(startLoc, endLoc, TEXT("OnGroundTick"));
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
	{
		if (Value > 0 && CanClimbUp() && !bClimbing)
		{
			bClimbing = true;
			Util::Debug("ClimbUp");
			ServerClimbUp();
			ClimbCooldown = GetGameTimeSinceCreation() + (AnimationHang->GetPlayLength()*1.7);
		}

		return;
	}

	Super::MoveForward(Value);
}

void ASpyCharacter::MoveRight(float Value)
{
	if (bClimbing)
		return;

	if (bHanging)
	{
		if (Value > 0.0f && CanClimbRight(false))	// Right
		{
			ServerClimbRight(false);
		}
		else if (Value < 0.0f && CanClimbRight(true))// Left
		{
			ServerClimbRight(true);
		}
		else if (Value == 0.0f && GetGameTimeSinceCreation() > NetStopMovementCooldown)
		{
			FVector vel = GetVelocity();
			if (vel.X != 0 || vel.Y != 0 || vel.Z != 0)
			{
				ServerStopMovement();
				NetStopMovementCooldown = GetGameTimeSinceCreation() + 1.0f;
			}
		}

		return;
	}

	Super::MoveRight(Value);
}

void ASpyCharacter::ServerStopMovement_Implementation()
{
	GetCharacterMovement()->StopActiveMovement();
	GetCharacterMovement()->StopMovementImmediately();
}

void ASpyCharacter::Jump()
{
	if (bHanging)
	{
		ServerCancelHang();
		return;
	}

	Super::Jump();
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