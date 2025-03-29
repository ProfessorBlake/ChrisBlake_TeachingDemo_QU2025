// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TeachingDemo2025 : ModuleRules
{
	public TeachingDemo2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
