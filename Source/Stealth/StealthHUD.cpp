// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthHUD.h"

void AStealthHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine == nullptr)
		return;

	FVector2D screenSize;
	GEngine->GameViewport->GetViewportSize(screenSize);

	SizeX = screenSize.X;
	SizeY = screenSize.Y;
}

float AStealthHUD::GetScreenWidth()
{
	return SizeX / 2;
}

float AStealthHUD::GetScreenHeight()
{
	return SizeY / 2;
}