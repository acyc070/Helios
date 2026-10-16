using UnrealBuildTool;

public class Helios : ModuleRules {
    public Helios(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "ApexDestruction",
            "BIKRig",
            "BlueprintConditionalsRuntime",
            "CameraSystemRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "KosmosIK",
            "LevelSequence",
            "NavigationSystem",
            "PhysicsCore",
            "SlateCore",
            "TarsierUtilities",
            "TarsierWwiseRuntimeExtension",
            "UMG",
	    "DeveloperSettings",
        });
    }
}
