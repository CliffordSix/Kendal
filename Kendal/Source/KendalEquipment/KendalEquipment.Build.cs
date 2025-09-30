using UnrealBuildTool;

public class KendalEquipment : ModuleRules
{
    public KendalEquipment(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "EngineAssetDefinitions",
                "Core",
                "ModularGameplay", 
                "Paper2D",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "KendalMapManagement",
                "Slate",
                "SlateCore",
            }
        );
    }
}