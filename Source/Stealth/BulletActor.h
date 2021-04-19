// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletActor.generated.h"

UCLASS()
class STEALTH_API ABulletActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletActor();

	UPROPERTY()
	class UNiagaraSystem* BulletEffect;

	UPROPERTY()
	class UNiagaraComponent* BulletEmitter;

	UFUNCTION()
	void SetEndLocation(FVector endLoc);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Destroy();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY()
	float LifeTime;

	UPROPERTY()
	bool bIsAlive;

	UPROPERTY()
	class UProjectileMovementComponent* MovementComponent;

	UPROPERTY()
	FVector hitLocation;

	UPROPERTY()
	USceneComponent* HomningComponent;

};
