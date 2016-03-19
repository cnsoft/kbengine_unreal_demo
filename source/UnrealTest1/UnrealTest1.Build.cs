// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealTest1 : ModuleRules
{
	public UnrealTest1(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        //£¿
        PublicAdditionalLibraries.Add("C://Users//cnsoft//Documents//Unreal Projects//UnrealTest1//Plugins//HelloUE4Plugin//Source//ThirdParty//HelloUE4PluginLibrary//x64//Debug//ExampleLibrary.lib");

    }
}
