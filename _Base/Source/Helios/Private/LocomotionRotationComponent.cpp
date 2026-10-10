#include "LocomotionRotationComponent.h"

ULocomotionRotationComponent::ULocomotionRotationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mFlowControlComponent = NULL;
    this->mDefaultRotationRate = 300.00f;
    this->mSpeedToRotationRateCurve = NULL;
}


