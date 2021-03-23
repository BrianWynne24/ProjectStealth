
#pragma once

#include "Util.h"
#include "Actor.h"

void Util::Debug(FString msg)
{
	//UE_LOG(LogTemp, Warning, TEXT(msg));
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, msg);
}

bool Util::IsClient(AActor* actor)
{
	if (actor == NULL)
		return false;

	return ((actor->HasAuthority() && actor->GetNetMode() == NM_ListenServer) || (!actor->HasAuthority() && actor->GetNetMode() != NM_ListenServer));
}