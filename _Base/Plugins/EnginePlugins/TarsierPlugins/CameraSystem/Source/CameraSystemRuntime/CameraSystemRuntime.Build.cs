using UnrealBuildTool;

public class CameraSystemRuntime : ModuleRules {
    public CameraSystemRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "TarsierUtilities",
	    "DeveloperSettings",
        });
    }
}
