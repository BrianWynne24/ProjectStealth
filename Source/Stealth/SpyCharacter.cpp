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
		InitCharacterMesh = NewCharacterMesh.Object;

	static ConstructorHelpers::FObjectFinder<UAnimSequence> hangAnimation(TEXT("/Game/Stealth/Spy/Animation/Hang_to_Crouch_fixed"));
	if (hangAnimation.Object != NULL)
		AnimationHang = hangAnimation.Object;

	static ConstructorHelpers::FClassFinder<AHUD> NewHUD(TEXT("/Game/Stealth/Spy/UI/HUDSpy"));
	if (NewHUD.Class != NULL)
		HUDClass = NewHUD.Class;

	StartingWeaponClass = AWeaponTaser::StaticClass();

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	//Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	ViewCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	ViewCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	bHanging = false;
	HangCooldown = 0.f;

	Energy = 100;
	
	bAlwaysRelevant = true;
}

void ASpyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpyCharacter, bHanging);
	DOREPLIFETIME(ASpyCharacter, bClimbing);
	DOREPLIFETIME(ASpyCharacter, Energy);
}

void ASpyCharacter::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	if (IsLocallyControlled())	// Only call on our client to do the heavy lifting
		TickHangTrace(false);

	if (HasAuthority())
		TickEnergyRecharge();

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
			ServerStopMovement();
	}
}

void ASpyCharacter::TickEnergyRecharge()
{
	float timeCreated = GetGameTimeSinceCreation();
	if (Energy >= 100 || EnergyRechargeCooldown > timeCreated)
		return;

	Energy += 10;
	if (Energy > 100)
		Energy = 100;

	EnergyRechargeCooldown = timeCreated + 0.6f;
}

void ASpyCharacter::RemoveEnergy(int energyAmount)
{
	if ((Energy - energyAmount) < 0)
		Energy = 0;
	else
		Energy -= energyAmount;

	EnergyRechargeCooldown = GetGameTimeSinceCreation() + 1.2f;
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

	FVector hitLoc = hitResults[0].ImpactNormal;
	FRotator rot = hitLoc.Rotation().GetNormalized() - FRotator(0, 180, 0);
	
	if (GetNetMode() == NM_ListenServer) // ListenServer support
		OnRep_Hanging();

	SetActorRotation(rot);
	ClientStartHang(rot.Yaw);
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

void ASpyCharacter::ServerSwingOuterRight_Implementation(bool bLeft)
{
	FHitResult rightSwingHit = TraceHangSwingRight(bLeft);
	if (!rightSwingHit.IsValidBlockingHit())
		return;

	FVector hitLocNormal = rightSwingHit.ImpactNormal;
	FVector hitLoc = rightSwingHit.Location;
	FRotator rot = hitLocNormal.Rotation().GetNormalized() - FRotator(0, 180, 0);

	float multiplier = 20;
	if (bLeft)
		multiplier *= -1;

	FVector currentLoc = GetActorLocation();
	FVector newLocation = FVector(hitLoc.X, hitLoc.Y, currentLoc.Z);
	newLocation += GetActorRightVector() * multiplier;

	SetActorLocation(newLocation);
	SetActorRotation(FRotator(0, rot.Yaw, 0));

	ClientStartHang(rot.Yaw);
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
		GetMesh()->PlayAnimation(AnimationHang, false);
		GetMesh()->SetPlayRate(0);

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

	AActor* hitTarget = hitDetails.GetActor();
	if (hitTarget != nullptr)
	{
		if (hitTarget->GetClass() == ABlockingVolume::StaticClass())
			hitDetails.bBlockingHit = false;
	}

	return hitDetails;
}

FHitResult ASpyCharacter::PerformLineTrace(FVector endLoc, FName traceName)
{
	FVector startLoc = GetActorLocation();
	return PerformLineTrace(startLoc, endLoc, traceName);
}

FHitResult ASpyCharacter::TraceClimbForward()
{
	//FVector endLoc = GetActorLocation() + (GetActorForwardVector() * 150); //Length
	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	FVector startLoc, endLoc;
	startLoc = GetActorLocation() + FVector(0, 0, capsuleHeight - 5);
	endLoc = startLoc + (GetActorForwardVector() * 60);

	return PerformLineTrace(startLoc, endLoc, TEXT("HangTickForward")); // Check forward
}

FHitResult ASpyCharacter::TraceClimbTop()
{
	FVector startLoc, endLoc;

	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	startLoc = GetActorLocation() + (GetActorForwardVector() * 45);
	startLoc.Z += capsuleHeight + 50; // Add 50 for average floor thickness
	endLoc = startLoc;
	endLoc.Z -= capsuleHeight;

	// TODO:: Revisit this idea?
	/*FHitResult hitResult = PerformLineTrace(startLoc, startLoc, TEXT("CheckInWorldTop"));
	AActor* hitActor = hitResult.GetActor();
	if (hitActor != nullptr)
	{
		Util::Debug("Hit inside");
		hitResult.bBlockingHit = false;
		return FHitResult();
	}*/
	/*FHitResult hitResult;
	FVector modLoc = startLoc + (GetActorUpVector() * 5);
	GetWorld()->SweepSingleByChannel(hitResult, modLoc, modLoc, FQuat(), ECollisionChannel::ECC_WorldStatic, FCollisionShape::MakeSphere(.5f));
	DrawDebugSphere(GetWorld(), modLoc, .5f, 1, FColor::Purple, false, 1.0f);

	if (hitResult.bStartPenetrating || hitResult.bBlockingHit)
	{
		Util::Debug("InWorld!");
		hitResult.bBlockingHit = false;
		return hitResult;
	}*/

	return PerformLineTrace(startLoc, endLoc, TEXT("HangTickTop")); // Check above
}

FHitResult ASpyCharacter::TraceHangMoveRight(bool bLeft)
{
	float dirValue = 50;
	if (bLeft)
		dirValue *= -1;

	FVector startLoc, endLoc;

	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	startLoc = GetActorLocation() + (GetActorRightVector() * dirValue);
	startLoc.Z += capsuleHeight - 15;
	endLoc = startLoc + (GetActorForwardVector() * 45);

	return PerformLineTrace(startLoc, endLoc, TEXT("RightLeftHangTrace"));
}

FHitResult ASpyCharacter::TraceHangSwingRight(bool bLeft)
{
	float dirValue = 50;
	if (bLeft)
		dirValue *= -1;

	FVector startLoc, endLoc;
	float capsuleHeight = GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	startLoc = GetActorLocation() + (GetActorRightVector() * dirValue);
	startLoc.Z += capsuleHeight - 15;
	startLoc += GetActorForwardVector() * 45;

	endLoc = startLoc - (GetActorRightVector() * dirValue);
	return PerformLineTrace(startLoc, endLoc, TEXT("RightLeftSwingTrace"));
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
	{
		// Elegant ;)
		ClientFixPosition(GetActorLocation(), bLeft);
		return;
	}

	float force = 100.f;
	if (bLeft)
		force *= -1;

	GetCharacterMovement()->Velocity = GetActorRightVector() * force;
}

void ASpyCharacter::ClientFixPosition_Implementation(FVector newPosition, bool bLeft)
{
	SetActorLocation(newPosition);
	
	float moveValue = 1.f;
	if (bLeft)
		moveValue *= -1;

	MoveRight(moveValue);
}

void ASpyCharacter::ServerClimbFinish_Implementation()
{
	if (GetOwner() == NULL)
		return;

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

void ASpyCharacter::ClientStartHang_Implementation(float newYaw)
{
	GetCharacterMovement()->FlushServerMoves(); // Thank you 'NovaWei'

	FRotator rot = FRotator(0, newYaw, 0);
	SetActorRotation(rot);
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

bool ASpyCharacter::CanSwingOuterRight(bool bLeft)
{
	FHitResult hitResult = TraceHangSwingRight(bLeft);
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

void ASpyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("EquipWeapon", IE_Pressed, this, &ASpyCharacter::EquipWeapon);
}

void ASpyCharacter::MoveForward(float Value)
{
	if (bHanging)
	{
		if (Value > 0 && CanClimbUp() && !bClimbing)
		{
			bClimbing = true;
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
		if (Value > 0.0f)	// Right
		{
			bool rightClimb = CanClimbRight(false);

			if (rightClimb)
				ServerClimbRight(false);
			else
			{
				if (CanSwingOuterRight(false))
					ServerSwingOuterRight(false);
			}
		}
		else if (Value < 0.0f)	// Left
		{
			bool leftClimb = CanClimbRight(true);

			if (leftClimb)
				ServerClimbRight(true);
			else
			{
				if (CanSwingOuterRight(true))
					ServerSwingOuterRight(true);
			}
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

void ASpyCharacter::EquipWeapon()
{
	// We are going to have to implement a cooldown
	// I do not want the player spamming server messages to put weapon up and down

	ServerEquipWeapon();
}

void ASpyCharacter::ServerEquipWeapon_Implementation()
{
	if (CurrentWeapon && !CurrentWeapon->IsActorBeingDestroyed())
	{
		CurrentWeapon->Destroy();

		UCharacterMovementComponent* movementComp = GetCharacterMovement();
		movementComp->MaxWalkSpeed = 500.f;
		movementComp->bUseControllerDesiredRotation = false;
		movementComp->bOrientRotationToMovement = true;

		ClientEquipWeapon(false);

		return;
	}

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;

	CurrentWeapon = GetWorld()->SpawnActor<AWeaponTaser>(AWeaponTaser::StaticClass(), spawnParams);

	UCharacterMovementComponent* movementComp = GetCharacterMovement();
	movementComp->MaxWalkSpeed = 350.f;
	movementComp->bUseControllerDesiredRotation = true;
	movementComp->bOrientRotationToMovement = false;

	ClientEquipWeapon(true);
}

void ASpyCharacter::ClientEquipWeapon_Implementation(bool bEquipped)
{
	if (bEquipped)
	{
		FVector socketLoc = GetMesh()->GetSocketLocation("tpp_weaponADS");
		CameraBoom->AttachTo(GetRootComponent());
		CameraBoom->SetWorldLocation(socketLoc);
		CameraBoom->TargetArmLength = 40.f;

		ViewCamera->bUsePawnControlRotation = true;

		UCharacterMovementComponent* movementComp = GetCharacterMovement();
		movementComp->MaxWalkSpeed = 350.f;
		movementComp->bUseControllerDesiredRotation = true;
		movementComp->bOrientRotationToMovement = false;
	}
	else
	{
		//ViewCamera->AttachToComponent(CameraBoom, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
		CameraBoom->SetWorldLocation(GetCapsuleComponent()->GetComponentLocation());
		CameraBoom->TargetArmLength = 500.f;

		ViewCamera->bUsePawnControlRotation = false;

		UCharacterMovementComponent* movementComp = GetCharacterMovement();
		movementComp->MaxWalkSpeed = 500.f;
		movementComp->bUseControllerDesiredRotation = false;
		movementComp->bOrientRotationToMovement = true;
	}
}