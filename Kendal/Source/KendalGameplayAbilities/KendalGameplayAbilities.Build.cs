using UnrealBuildTool;

public class KendalGameplayAbilities : ModuleRules
{
    public KendalGameplayAbilities(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "GameplayAbilities",
                "GameplayTags",
                "KendalInteraction",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "GameplayTasks",
                "KendalTileMapActorInterface",
                "Slate",
                "SlateCore",
                "PaperZD"
            }
        );
    }
}