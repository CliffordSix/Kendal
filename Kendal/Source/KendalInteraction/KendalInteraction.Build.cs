using UnrealBuildTool;

public class KendalInteraction : ModuleRules
{
    public KendalInteraction(ReadOnlyTargetRules Target) : base(Target)
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
                "KendalEquipment",
                "KendalTileMap",
                "KendalMapManagement",
                "Slate",
                "SlateCore",
            }
        );
    }
}