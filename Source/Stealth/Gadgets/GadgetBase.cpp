// Fill out your copyright notice in the Description page of Project Settings.


#include "GadgetBase.h"

UGadgetBase::UGadgetBase()
{
	Name = "GadgetBase";
}

void UGadgetBase::OnShoot(float velForce)
{
	if (!CanShoot() || Quantity <= 0)
		return;
}

void UGadgetBase::OnUse()
{
	if (!CanUse() || Quantity <= 0)
		return;
}