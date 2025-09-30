using UnrealBuildTool;

public class KendalTileMap : ModuleRules
{
    public KendalTileMap(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Paper2D",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "DeveloperSettings",
                "Engine",
                "Slate",
                "SlateCore"
            }
        );
    }
}