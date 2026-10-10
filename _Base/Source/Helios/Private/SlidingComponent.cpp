#include "SlidingComponent.h"

USlidingComponent::USlidingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mFlowControlComponent = NULL;
    this->mLocomotionComponent = NULL;
    this->mSlideInputTime = 0.07f;
    this->mMinSpeedToStartSlide = 250.00f;
    this->mMinSlideSpeed = 75.00f;
    this->mSlideTime = 1.00f;
    this->mMaxSlideSpeed = 400.00f;
    this->mMinSlideFloorAngle = -10.00f;
    this->mPawnHeightSliding = 45.00f;
    this->mJumpSettings.AddDefaulted(1);
    this->mCurrentSlideType = ESlidingType::None;
}


