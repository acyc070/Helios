#include "AnimLeverData.h"

FAnimLeverData::FAnimLeverData() {
    this->mShouldAnimate = false;
    this->mLeverType = ELeverType::Lever;
    this->mRotationDirection = 0.00f;
    this->mAngle = 0.00f;
    this->mIsNear = false;
    this->mNearAngle = 0.00f;
    this->mFarAngle = 0.00f;
}

