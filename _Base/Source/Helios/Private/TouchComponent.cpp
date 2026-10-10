#include "TouchComponent.h"

UTouchComponent::UTouchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mLimbs.AddDefaulted(2);
    this->mTouchingOverride = NULL;
    this->mBlendInTime = 0.25f;
    this->mBlendOutTime = 0.50f;
    this->mTargetSpeed = 50.00f;
    this->mBlendInCurve = NULL;
    this->mBlendOutCurve = NULL;
    this->mDistanceHysteresis = 5.00f;
    this->mAngleHysteresis = 5.00f;
    this->mRetriggerDelay = 0.00f;
    this->mRequiresInput = false;
    this->mAllowMultiTouch = true;
    this->mCharacterIKComponent = NULL;
    this->mFlowComponent = NULL;
    this->mChalkboard = NULL;
    this->mPawnSelf = NULL;
}

void UTouchComponent::SetAllowMultiTouch(bool allow) {
}


