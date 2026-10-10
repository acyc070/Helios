using UnrealBuildTool;

public class TarsierWwiseRuntimeExtension : ModuleRules {
    public TarsierWwiseRuntimeExtension(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "Engine",
            "PhysicsCore",
        });
    }
}
