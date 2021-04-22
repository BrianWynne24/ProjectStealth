// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StealthCharacter.h"
#include "SpyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API ASpyCharacter : public AStealthCharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	void Tick(float deltaSeconds);

public:

	ASpyCharacter();

	void Jump();
	void StopJumping();

	UFUNCTION(Server, Reliable)
	void ServerClimbFinish();

	UFUNCTION()
	void RemoveEnergy(int energyAmount);

private:

	UPROPERTY(ReplicatedUsing = OnRep_Hanging)
	bool bHanging;

	UPROPERTY(Replicated)
	bool bClimbing;

	UPROPERTY(Replicated)
	uint8 Energy;

	UPROPERTY()
	float EnergyRechargeCooldown;

	UPROPERTY()
	uint32 ClimbCooldown;

	UPROPERTY()
	uint32 NetStopMovementCooldown;

	UFUNCTION()
	void OnRep_Hanging();

	UPROPERTY()
	float HangCooldown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* AnimationHang;

	UFUNCTION(Server, Reliable)
	void ServerStartHang();

	UFUNCTION(Client, Reliable)
	void ClientStartHang(float newYaw);

	UFUNCTION(Client, Reliable)
	void ClientFixPosition(FVector newPosition, bool bLeft);

	UFUNCTION(Server, Reliable)
	void ServerCancelHang();

	UFUNCTION(Server, Reliable)
	void ServerStopMovement();

	/*UFUNCTION(NetMulticast, Reliable)
	void MulticastStartHang(FVector forwardHit, FVector upperHit);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastCancelHang();*/

	UFUNCTION()
	TArray<FHitResult> TickHangTrace(bool bIsServer);

	UFUNCTION()
	void TickEnergyRecharge();

	UFUNCTION()
	void StartHangCooldown();

	UFUNCTION()
	bool CanHang();

	UFUNCTION(Server, Reliable)
	void ServerClimbUp();

	UFUNCTION(Server, Reliable)
	void ServerClimbRight(bool bLeft);

	UFUNCTION(Server, Reliable)
	void ServerSwingOuterRight(bool bLeft);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastClimbUp();

	UFUNCTION()
	bool CanClimbUp();

	UFUNCTION()
	bool CanClimbRight(bool bLeft);

	UFUNCTION()
	bool CanSwingOuterRight(bool bLeft);

	UFUNCTION()
	FHitResult PerformLineTrace(FVector startLoc, FVector endLoc, FName traceName);
	FHitResult PerformLineTrace(FVector endLoc, FName traceName);

	UFUNCTION()
	FHitResult TraceClimbForward();

	UFUNCTION()
	FHitResult TraceClimbTop();

	UFUNCTION()
	FHitResult TraceHangMoveRight(bool bLeft);

	UFUNCTION()
	FHitResult TraceHangSwingRight(bool bLeft);

	UFUNCTION()
	bool OnGround();

	UFUNCTION(Server, Reliable)
	void ServerEquipWeapon();

	UFUNCTION()
	void EquipWeapon();

	UFUNCTION(Client, Reliable)
	void ClientEquipWeapon(bool bEqupped);

protected:

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Called for forwards/backward input */
	void MoveForward(float Value) override;

	/** Called for side to side input */
	void MoveRight(float Value) override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void BeginPlay() override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintCallable)
	int GetEnergy() { return (int)Energy; }
	
};
