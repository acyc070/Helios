#include "AkAudioVolume.h"
#include "TarEditableVolumeComponent.h"

AAkAudioVolume::AAkAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UTarEditableVolumeComponent>(TEXT("mEditableVolumeComponent"))) {
    this->mPriority = 1.00f;
    this->mMuteWhenOutsideGroup = true;
    this->mUseCameraAsActivator = false;
    this->mDebugVolume = false;
    this->mReverbBus = NULL;
    this->mReverbSendLevel = 0.50f;
    this->mMaxReverbLocationUpdateDistance = 8000;
    this->mReverbLocationUpdateRate = 0.50f;
    this->mAudioEvent = NULL;
    this->mPreviewAmbience = false;
    this->mAmbienceVolume = 1.00f;
    this->mAmbiencePitch = 0;
    this->mGlobalAmbienceVolume = 0.00f;
    this->mAmbienceFadeRate = 0.50f;
    this->mOutsideOcclusionVol = 1.00f;
    this->mOutsideOcclusionLPF = 0.00f;
    this->mInsideOcclusionVol = 1.00f;
    this->mInsideOcclusionLPF = 0.00f;
    this->mUseReverbOcclusion = false;
    this->mReverbOcclusion = 1.00f;
    this->mOcclusionFadeRate = 0.50f;
    this->mReverbAttenuationScale = 1.00f;
    this->mEditableVolumeComponent = (UTarEditableVolumeComponent*)RootComponent;
    this->mIsActiveVolume = false;
    this->mIsMuted = false;
}

void AAkAudioVolume::SetReverbOcclusion(float inReverbOcclusion, bool useFade) {
}

void AAkAudioVolume::SetReverbAttenuationScale(float reverbAttenuationScale) {
}

void AAkAudioVolume::SetOutsideOcclusionVol(float inOutsideOcclusionVol, bool useFade) {
}

void AAkAudioVolume::SetOutsideOcclusionLPF(float inOutsideOcclusionLPF, bool useFade) {
}

void AAkAudioVolume::SetOcclusionSettings(FOcclusionValues inOcclusionValues, bool useFade) {
}

void AAkAudioVolume::SetInsideOcclusionVol(float inInsideOcclusionVol, bool useFade) {
}

void AAkAudioVolume::SetInsideOcclusionLPF(float inInsideOcclusionLPF, bool useFade) {
}

void AAkAudioVolume::ResetInitialOcclusionValues(bool useFade) {
}

void AAkAudioVolume::MuteVolume(bool useFadeRate) {
}


