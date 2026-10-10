#include "LocomotionFalloffHelper.h"

FLocomotionFalloffHelper::FLocomotionFalloffHelper() {
    this->mSafetyCheckRadiusMultiplier = 0.00f;
    this->mSafetyCheckOffset = 0.00f;
    this->mCurrentSettings = EFalloffSettingType::Walk;
    this->mIsBalancingOnLedge = false;
    this->mShouldWalkStop = false;
    this->mIsWalkingAlong = false;
    this->mTimeBalancingOnLedge = 0.00f;
    this->mChalkboard = NULL;
    this->mCapsuleComponent = NULL;
}

