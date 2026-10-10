#include "AnimDragParams.h"

FAnimDragParams::FAnimDragParams() {
    this->mDragBackStepThresholdHysteresis = 0.00f;
    this->mMinInputAngleToResetAnimations = 0.00f;
    this->mDragPlayerVelocityDeadZone = 0.00f;
    this->mIntoJobThreshold = 0.00f;
    this->mIntoSprintThreshold = 0.00f;
}

