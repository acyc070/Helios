#include "AnimWallData.h"

FAnimWallData::FAnimWallData() {
    this->mIsPressingAgainst = false;
    this->mIsSlidingAlong = false;
    this->mContactAngle = 0.00f;
    this->mLeftHandBlendWeight = 0.00f;
    this->mRightHandBlendWeight = 0.00f;
}

