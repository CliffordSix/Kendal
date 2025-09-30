using UnrealBuildTool;

public class KendalMapManagement : ModuleRules
{
    public KendalMapManagement(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "KendalTileMap",
                "Paper2D",
                "Slate",
                "SlateCore",
            }
        );
    }
}