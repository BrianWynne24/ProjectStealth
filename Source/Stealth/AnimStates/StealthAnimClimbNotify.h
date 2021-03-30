// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "StealthAnimClimbNotify.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API UStealthAnimClimbNotify : public UAnimNotifyState
{
	GENERATED_BODY()
	

public:

	//void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

};
