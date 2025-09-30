using UnrealBuildTool;

public class KendalGameMode : ModuleRules
{
    public KendalGameMode(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "KendalTileMap",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "KendalEquipment",
                "Slate",
                "SlateCore"
            }
        );
    }
}