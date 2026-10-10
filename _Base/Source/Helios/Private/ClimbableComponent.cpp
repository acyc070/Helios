#include "ClimbableComponent.h"

UClimbableComponent::UClimbableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabled = true;
    this->mAllowClimbUpOnTop = true;
    this->mAllowClimbBlockCheck = true;
    this->mCanClimbSideways = true;
    this->mCanJumpOff = true;
    this->mInvertHorizontalOnRear = true;
}


