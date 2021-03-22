// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Enumeration.h"
#include "StealthUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API UStealthUserWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:

	UPROPERTY(meta = (BindWidget))
		class UButton* SpectatorBtn;

	UPROPERTY(meta = (BindWidget))
		class UButton* SpyBtn;

	UPROPERTY(meta = (BindWidget))
		class UButton* ArgusBtn;

	UFUNCTION()
		void SpyButtonClicked();

	UFUNCTION()
		void SpectatorButtonClicked();

	UFUNCTION()
		void ArgusButtonClicked();

private:

	UFUNCTION()
	void JoinTeam(ETeam team);
	
};
