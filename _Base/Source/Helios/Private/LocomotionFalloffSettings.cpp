#include "LocomotionFalloffSettings.h"

FLocomotionFalloffSettings::FLocomotionFalloffSettings() {
    this->mSearchForwardOffset = 0.00f;
    this->mSearchHeightOffset = 0.00f;
    this->mMargin = 0.00f;
    this->mMinInputToWalkOffLedge = 0.00f;
    this->mTimeToFallOff = 0.00f;
    this->mAngleToGlide = 0.00f;
    this->mMinHeight = 0.00f;
    this->mEnabled = false;
}

