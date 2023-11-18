// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ForHyoYaStudy : ModuleRules
{
	public ForHyoYaStudy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
