// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthAnimClimbNotify.h"
#include "../StealthPlayerController.h"
#include "../SpyCharacter.h"
#include "../Util.h"

void UStealthAnimClimbNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	UWorld* World = GetWorld();
	if (World == nullptr)
		return;

	AStealthPlayerController* playerController = (AStealthPlayerController*)GetWorld()->GetFirstLocalPlayerFromController();
	if (playerController == nullptr)
		return;

	ASpyCharacter* spyCharacter = (ASpyCharacter*)playerController->GetPawn();
	if (spyCharacter == nullptr)
		return;

	spyCharacter->ServerClimbFinish();
	Util::Debug("Boop");
}