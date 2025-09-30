using UnrealBuildTool;

public class KendalPlayer : ModuleRules
{
    public KendalPlayer(ReadOnlyTargetRules Target) : base(Target)
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
                "KendalCamera",
                "KendalCharacter",
                "KendalGameplayAbilities",
                "Slate",
                "SlateCore",
            }
        );
    }
}