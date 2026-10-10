#include "HangableComponent.h"

UHangableComponent::UHangableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabled = true;
    this->mRegrabTimeout = 1.00f;
    this->mAllowSwinging = true;
    this->mTurningFactor = 75.00f;
    this->mInitialVelocityMultiplier = 1.00f;
    this->mCanAutoGrab = false;
    this->mOverrideCanAutoGrab = false;
}


