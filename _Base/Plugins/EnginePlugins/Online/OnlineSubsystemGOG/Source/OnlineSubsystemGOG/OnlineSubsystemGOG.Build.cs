using UnrealBuildTool;

public class OnlineSubsystemGOG : ModuleRules {
    public OnlineSubsystemGOG(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
	    "NetCore",
        });
    }
}
