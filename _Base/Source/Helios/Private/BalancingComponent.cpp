#include "BalancingComponent.h"

UBalancingComponent::UBalancingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mInputDeadZone = 0.05f;
    this->mFairyForwardDistance = 0.20f;
    this->mMaximumTurnRate = 300.00f;
    this->mEnterExitMaxAngle = 45.00f;
    this->mTimeToFallOff = 1.00f;
    this->mFlowControlComponent = NULL;
}


