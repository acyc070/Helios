#include "AudioSystemsBlueprintLibrary.h"

UAudioSystemsBlueprintLibrary::UAudioSystemsBlueprintLibrary() {
}

void UAudioSystemsBlueprintLibrary::UnbindThreatLevelEvents(const FThreatLevelEventDelegate& threatLevelEvents) {
}

void UAudioSystemsBlueprintLibrary::UnbindMusicSyncCallback(const FMusicDelegate& Callback) {
}

void UAudioSystemsBlueprintLibrary::UnbindGlobalAudioEvent(const FGlobalAudioEventDelegate& globalAudioEvent) {
}

void UAudioSystemsBlueprintLibrary::UnbindAudioVolumeTransitionEvents(const FAudioVolumeTransitionEventDelegate& audioVolumeTransitionEvents) {
}

void UAudioSystemsBlueprintLibrary::UnbindAudioVolumeGroupEvents(const FAudioVolumeGroupEventDelegate& audioVolumeGroupEvents) {
}

void UAudioSystemsBlueprintLibrary::StopGlobalMusic() {
}

void UAudioSystemsBlueprintLibrary::StartGlobalMusic() {
}

void UAudioSystemsBlueprintLibrary::SetGlobalAudioSettings(UAkAudioEvent* inAudioEvent, UAkAuxBus* inReverb, float inReverbSend, FName inDefaultSurfaceMaterial) {
}

void UAudioSystemsBlueprintLibrary::SendGlobalAudioEvent(FName AudioEvent, UObject* Instigator) {
}

void UAudioSystemsBlueprintLibrary::RegisterDefaultListener(AActor* attachment) {
}

void UAudioSystemsBlueprintLibrary::PostGlobalEvent(UAkAudioEvent* AudioEvent) {
}

UAkComponent* UAudioSystemsBlueprintLibrary::GetMusicPlaybackComponent() {
    return NULL;
}

FThreatGroup UAudioSystemsBlueprintLibrary::GetHighestThreat() {
    return FThreatGroup{};
}

UAkComponent* UAudioSystemsBlueprintLibrary::GetGlobalAmbienceComponent() {
    return NULL;
}

TArray<AAkAudioVolume*> UAudioSystemsBlueprintLibrary::GetAudioVolumesOfGroup(FName audioVolumeGroup) {
    return TArray<AAkAudioVolume*>();
}

UAkComponent* UAudioSystemsBlueprintLibrary::GetAudioVolumeAmbienceComponent() {
    return NULL;
}

AAkAudioVolume* UAudioSystemsBlueprintLibrary::GetActiveAudioVolume() {
    return NULL;
}

void UAudioSystemsBlueprintLibrary::BindThreatLevelEvents(const FThreatLevelEventDelegate& threatLevelEvents) {
}

void UAudioSystemsBlueprintLibrary::BindMusicSyncCallback(const FMusicDelegate& Callback) {
}

void UAudioSystemsBlueprintLibrary::BindGlobalAudioEvent(const FGlobalAudioEventDelegate& globalAudioEvent) {
}

void UAudioSystemsBlueprintLibrary::BindAudioVolumeTransitionEvents(const FAudioVolumeTransitionEventDelegate& audioVolumeTransitionEvents) {
}

void UAudioSystemsBlueprintLibrary::BindAudioVolumeGroupEvents(const FAudioVolumeGroupEventDelegate& audioVolumeGroupEvents) {
}


