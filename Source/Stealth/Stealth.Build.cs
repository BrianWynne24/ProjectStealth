// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Stealth : ModuleRules
{
	public Stealth(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "AIModule", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG", "Niagara" });
	}
}
