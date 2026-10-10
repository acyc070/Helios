using UnrealBuildTool;

public class KosmosBIK : ModuleRules {
    public KosmosBIK(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BIKRig",
            "Core",
            "CoreUObject",
            "Engine",
            "KosmosIK",
        });
    }
}
