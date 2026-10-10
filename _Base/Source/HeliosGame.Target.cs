using UnrealBuildTool;

public class HeliosGameTarget : TargetRules {
	public HeliosGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Helios",
		});
	}
}
