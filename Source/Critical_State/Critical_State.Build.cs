// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Critical_State : ModuleRules
{
	public Critical_State(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
