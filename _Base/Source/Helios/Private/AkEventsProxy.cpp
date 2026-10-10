#include "AkEventsProxy.h"

UAkEventsProxy::UAkEventsProxy() {
}

void UAkEventsProxy::SendThreatLevelEvent(FThreatData ThreatData) {
}

void UAkEventsProxy::SendGlobalAudioEvent(FName EventName, UObject* Instigator) {
}

void UAkEventsProxy::SendAudioVolumeTransitionEvent(const AAkAudioVolume* AudioVolume, const EAudioVolumeGroupEventType EventType) {
}

void UAkEventsProxy::SendAudioVolumeGroupEvent(const FName& groupName, const EAudioVolumeGroupEventType EventType) {
}

void UAkEventsProxy::MusicCallback(EAkCallbackType inCallbackType, UAkCallbackInfo* inCallbackInfo) {
}


