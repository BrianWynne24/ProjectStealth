
#pragma once

#include "Util.h"

void Util::Debug(FString msg)
{
	//UE_LOG(msg);
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, msg);
}