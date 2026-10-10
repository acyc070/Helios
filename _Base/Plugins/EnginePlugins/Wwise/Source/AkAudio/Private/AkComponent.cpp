#include "AkComponent.h"

UAkComponent::UAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseSpatialAudio = false;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->EnableSpotReflectors = false;
    this->EarlyReflectionAuxBus = NULL;
    this->EarlyReflectionOrder = 0;
    this->EarlyReflectionBusSendGain = 1.00f;
    this->EarlyReflectionMaxPathLength = 0.00f;
    this->roomReverbAuxBusGain = 0.00f;
    this->diffractionMaxEdges = 0;
    this->diffractionMaxPaths = 0;
    this->diffractionMaxPathLength = 0.00f;
    this->DrawFirstOrderReflections = false;
    this->DrawSecondOrderReflections = false;
    this->DrawHigherOrderReflections = false;
    this->DrawDiffraction = false;
    this->StopWhenOwnerDestroyed = true;
    this->AttenuationScalingFactor = 1.00f;
    this->OcclusionRefreshInterval = 0.00f;
    this->bUseReverbVolumes = true;
    this->VoicePitch = 0;
    this->VoiceVolumeMultiplier = 1.00f;
    this->mRandomizeStart = false;
    this->mAutoPost = false;
    this->mStopOnWorldReloaded = true;
    this->mEnableOcclusion = true;
    this->mEnableAuxSends = true;
    this->mDistanceToPlayerUpdateRate = 0.30f;
    this->mDistanceToPlayerUpdateThreshold = 5.00f;
    this->mDebugComponent = false;
    this->mInitialCooldown = 1.00f;
}

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
}

void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkComponent::UpdateAudioVolumeOcclusion(bool useFadeRate) {
}

void UAkComponent::SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
}

void UAkComponent::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const FString& RTPC, int32 PlayingID, ECurveInterpolation Curve, bool bypassWwiseInterpolation) {
}

void UAkComponent::SetOutputBusVolume(float BusVolume) {
}

void UAkComponent::SetListenerToDefault() {
}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners) {
}

void UAkComponent::SetEnableOcclusion(bool enableOcclusion) {
}

void UAkComponent::SetEnableAuxSends(bool Enable) {
}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume) {
}

void UAkComponent::SetEarlyReflectionsAuxBus(const FString& AuxBusName) {
}

void UAkComponent::SetAttenuationScalingFactor(float Value) {
}

void UAkComponent::SeekOnEvent(UAkAudioEvent* AkEvent, float SeekTime, bool seekToNearestMarker, bool randomize, const FString& AudioEvent, int32 PlayingID) {
}

void UAkComponent::ResumePlayingEvents(float inFadetime, ECurveInterpolation inCurve, UAkAudioEvent* inEvent, int32 PlayingID) {
}

void UAkComponent::PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger) {
}

int32 UAkComponent::PostEventWithFadeIn(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, float FadeTime, ECurveInterpolation Curve) {
    return 0;
}

int32 UAkComponent::PostEventIfNotPlaying(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback) {
    return 0;
}

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName) {
    return 0;
}

void UAkComponent::PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkComponent::PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
    return 0;
}

void UAkComponent::PausePlayingEvents(float inFadetime, ECurveInterpolation inCurve, UAkAudioEvent* inEvent, int32 PlayingID) {
}

bool UAkComponent::IsEventBeingPlayed(UAkAudioEvent* AkEvent) {
    return false;
}

bool UAkComponent::HasActiveEvents() const {
    return false;
}

void UAkComponent::GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, const FString& RTPC, int32 PlayingID) {
}

AAkAudioVolume* UAkComponent::GetCurrentAudioVolume() {
    return NULL;
}

float UAkComponent::GetAttenuationRadius(const FString& inAudioEvent) const {
    return 0.0f;
}

void UAkComponent::FadeOutPlayingEvents(float inFadetime, ECurveInterpolation inCurve, UAkAudioEvent* inEvent, int32 PlayingID) {
}

void UAkComponent::FadeOutPlayingEventByName(const FString& AudioEvent, float inFadetime, ECurveInterpolation inCurve, int32 PlayingID) {
}

void UAkComponent::BreakPlayingEvents(float inFadetime, ECurveInterpolation inCurve, UAkAudioEvent* inEvent, int32 PlayingID) {
}


