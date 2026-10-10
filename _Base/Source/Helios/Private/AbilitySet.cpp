#include "AbilitySet.h"

FAbilitySet::FAbilitySet() {
    this->mCategories = 0;
    this->mGrabs = 0;
    this->mJumps = 0;
    this->mLocomotion = 0;
    this->mSlides = 0;
    this->mTouch = 0;
    this->mLookAt = 0;
    this->mCommunication = 0;
    this->mPickups = 0;
    this->mOther = 0;
    this->mWalkStartRatioOverride = 0.00f;
    this->mLocomotionSpeed[0] = 0.00f;
    this->mLocomotionSpeed[1] = 0.00f;
    this->mLocomotionSpeed[2] = 0.00f;
    this->mLocomotionSpeed[3] = 0.00f;
    this->mLocomotionAcceleration[0] = 0.00f;
    this->mLocomotionAcceleration[1] = 0.00f;
    this->mLocomotionAcceleration[2] = 0.00f;
    this->mLocomotionAcceleration[3] = 0.00f;
    this->mLocomotionRotationRate[0] = 0.00f;
    this->mLocomotionRotationRate[1] = 0.00f;
    this->mLocomotionRotationRate[2] = 0.00f;
    this->mLocomotionRotationRate[3] = 0.00f;
}

