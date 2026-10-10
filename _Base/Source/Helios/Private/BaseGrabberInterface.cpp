#include "BaseGrabberInterface.h"

UBaseGrabberInterface::UBaseGrabberInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mControlledPawn = NULL;
    this->mFlowControlComponent = NULL;
    this->mEndGrabMode = EGrabEndInputOptions::OnReleaseOfGrabInput;
    this->mHorizontalGrabRange = 0.00f;
    this->mVerticalGrabRange = 0.00f;
    this->mEnableIK = true;
    this->mIKBlendInTime = 0.10f;
    this->mIKBlendOutTime = 0.30f;
    this->mIKCharacterComponent = NULL;
    this->mGrabbingState = EGrabbingStates::NotGrabbing;
    this->mGrabType = EAbilitySetGrab::MAX;
    this->mGrabRequested = EGrabRequestState::Unchanged;
    this->mCharacterAudioComponent = NULL;
    this->mIsHandlingStartGrab = false;
}

void UBaseGrabberInterface::ReleaseGrab(EGrabReleaseOptions releaseOption) {
}


