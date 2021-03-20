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

private:

	UPROPERTY()
		bool bHanging;

	void TickHangTrace(float deltaSeconds);

	bool HangForwardTrace(FHitResult& hitDetails);
	bool HangAboveTrace(FHitResult& hitDetails);

protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};
