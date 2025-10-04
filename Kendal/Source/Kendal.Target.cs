// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class KendalTarget : TargetRules
{
	public KendalTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_6;
		ExtraModuleNames.Add("Kendal");
		ExtraModuleNames.AddRange(new string[] 
		{
			"Input",
			"KendalCamera",
			"KendalCharacter",
			"KendalEquipment",
			"KendalGameMode",
			"KendalGameplayAbilities",
			"KendalHud",
			"KendalInteraction",
			"KendalMapManagement",
			"KendalMovement",
			"KendalPlayer",
			"KendalTileMap",
			"KendalTileMapActorInterface",
		});
		RegisterModulesCreatedByRider();
	}

	private void RegisterModulesCreatedByRider()
	{
		ExtraModuleNames.AddRange(new string[] { "KendalCamera", "KendalEquipmentUI" });
	}
}
