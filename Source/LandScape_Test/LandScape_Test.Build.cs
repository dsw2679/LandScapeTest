// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LandScape_Test : ModuleRules
{
	public LandScape_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
