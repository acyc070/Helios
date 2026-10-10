using UnrealBuildTool;

public class HeliosEditorTarget : TargetRules {
	public HeliosEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Helios",
		});
	}
}
