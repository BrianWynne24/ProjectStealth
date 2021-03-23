
#pragma once

#include "CoreMinimal.h"

class Util
{
public:

	static void Debug(FString msg);

	static bool IsClient(AActor* actor);
};