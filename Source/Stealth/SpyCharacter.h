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

	ASpyCharacter();

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	void Tick(float deltaSeconds);

public:

	void EquipWeapon(UClass* weaponClass);

	void Jump();
	void StopJumping();

	UFUNCTION(Server, Reliable)
	void ServerClimbFinish();

private:

	UPROPERTY(ReplicatedUsing = OnRep_Hanging)
	bool bHanging;

	UPROPERTY(Replicated)
	bool bClimbing;

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
	void StartHangCooldown();

	UFUNCTION()
	bool CanHang();

	UFUNCTION(Server, Reliable)
	void ServerClimbUp();

	UFUNCTION(Server, Reliable)
	void ServerClimbRight(bool bLeft);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastClimbUp();

	UFUNCTION()
	bool CanClimbUp();

	UFUNCTION()
	bool CanClimbRight(bool bLeft);

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
	bool OnGround();

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
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};
