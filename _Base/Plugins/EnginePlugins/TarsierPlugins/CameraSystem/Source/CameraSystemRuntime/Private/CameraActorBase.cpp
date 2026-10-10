#include "CameraActorBase.h"
#include "Components/SceneComponent.h"
#include "TarEditableVolumeComponent.h"

ACameraActorBase::ACameraActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->mEditablePlayerVolume = CreateDefaultSubobject<UTarEditableVolumeComponent>(TEXT("EditablePlayerVolume"));
    this->mPriority = 0;
    this->mEnabled = true;
    this->mNearClipPlane = 10.00f;
    this->mOverrideCameraPositionLerpSpeed = false;
    this->mOverrideCameraZMultiplier = false;
    this->mOverrideCameraRotationLerpParams = false;
    this->mOverrideLookAroundYaw = false;
    this->mOverrideLookAroundPitch = false;
    this->mOverrideZoomChannelWeights = false;
    this->mCameraPositionLerpSpeed = 2.00f;
    this->mCameraZMultiplier = 1.00f;
    this->mFOVLerpSpeed = 1.50f;
    this->mSyncedPositionAndRotation = false;
    this->mLerpFactor = ELerpFactor::Position;
    this->mLookAroundYaw = 20.00f;
    this->mLookAroundPitch = 15.00f;
    this->mTransitionTime = 1.00f;
    this->mTransitionEasingFunction = EEasingFunc::EaseOut;
    this->mEditablePlayerVolume->SetupAttachment(RootComponent);
}

void ACameraActorBase::SetTargetViewOverTime(float secondsToReachTarget, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ACameraActorBase::EnableAllCameraBlockers() {
}

void ACameraActorBase::DisableAllCameraBlockers() {
}


