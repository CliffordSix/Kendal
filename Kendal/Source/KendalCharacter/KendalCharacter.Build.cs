using UnrealBuildTool;

public class KendalCharacter : ModuleRules
{
    public KendalCharacter(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Input",
                "GameplayAbilities",
                "KendalInteraction",
                "KendalTileMapActorInterface",
                "Paper2D",
                "PaperZD"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "DeveloperSettings",
                "Engine",
                "EnhancedInput",
                "KendalGameMode",
                "GameplayTags",
                "KendalEquipment",
                "KendalGameplayAbilities",
                "KendalMapManagement",
                "Slate",
                "SlateCore",
            }
        );
    }
}