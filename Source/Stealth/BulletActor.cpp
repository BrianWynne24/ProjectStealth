// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletActor.h"
#include "WeaponBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Util.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"

// Sets default values
ABulletActor::ABulletActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BaseComponent"));

	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> NiagaraBulletEffect(TEXT("/Game/Stealth/Argus/Effects/BulletTracer_System"));
	if (NiagaraBulletEffect.Object != nullptr)
		BulletEffect = NiagaraBulletEffect.Object;

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
	MovementComponent->SetUpdatedComponent(RootComponent);
	MovementComponent->InitialSpeed = 0.f;	
	MovementComponent->MaxSpeed = 10000.f;
	MovementComponent->bShouldBounce = false;
	MovementComponent->bIsHomingProjectile = false;
	MovementComponent->ProjectileGravityScale = 0.f;

	SetReplicates(false);
	SetReplicatingMovement(false);
	
	CollisionEnabledHasPhysics(ECollisionEnabled::NoCollision);
	bIsAlive = false;
}

void ABulletActor::SetEndLocation(FVector endLoc)
{
	AWeaponBase* curWeapon = (AWeaponBase*)GetOwner();
	if (curWeapon == nullptr)
		return;

	FVector newRot = (endLoc - curWeapon->GetMuzzleLocation());
	newRot.Normalize();

	SetActorRotation(newRot.Rotation());
	//BulletEmitter->SetWorldRotation(newRot.Rotation());
	BulletEmitter->SetVisibility(true, false);

	MovementComponent->InitialSpeed = 10000.f;

	bIsAlive = true;
	hitLocation = endLoc;
}

// Called when the game starts or when spawned
void ABulletActor::BeginPlay()
{
	Super::BeginPlay();
	LifeTime = GetGameTimeSinceCreation() + 1.5f;

	if (BulletEffect)
	{
		AWeaponBase* curWeapon = (AWeaponBase*)GetOwner();
		if (curWeapon == nullptr)
			return;

		BulletEmitter = UNiagaraFunctionLibrary::SpawnSystemAttached(BulletEffect, GetRootComponent(), "", GetActorLocation(), GetActorRotation(), EAttachLocation::KeepWorldPosition, false);
		BulletEmitter->SetVisibility(false, false);
	}
}

// Called every frame
void ABulletActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsAlive)
	{
		MovementComponent->Velocity = GetActorForwardVector() * MovementComponent->InitialSpeed;
		
		float dist = FVector::Dist(GetActorLocation(), hitLocation);
		if (dist <= 100.f)
			Destroy();
	}

	if (GetGameTimeSinceCreation() > LifeTime)
		Destroy();
}

void ABulletActor::Destroy()
{
	Super::Destroy();

	if (BulletEmitter)
		BulletEmitter->DestroyInstance();
}
