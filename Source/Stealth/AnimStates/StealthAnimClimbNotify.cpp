// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthAnimClimbNotify.h"
#include "../StealthPlayerController.h"
#include "../SpyCharacter.h"
#include "../Util.h"

void UStealthAnimClimbNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	ASpyCharacter* spyCharacter = (ASpyCharacter*)MeshComp->GetOwner();
	if (spyCharacter != nullptr)
		spyCharacter->ServerClimbFinish();
}