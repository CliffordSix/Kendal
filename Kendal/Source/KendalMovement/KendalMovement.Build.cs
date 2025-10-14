using UnrealBuildTool;

public class KendalMovement : ModuleRules
{
    public KendalMovement(ReadOnlyTargetRules Target) : base(Target)
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
                "GameplayAbilities",
                "KendalGameplayAbilities",
                "Slate",
                "SlateCore"
            }
        );
    }
}