#include "AnimLandData.h"

FAnimLandData::FAnimLandData() {
    this->mAngleOrInvTurnCircleRadius = 0.00f;
    this->mSpeed = 0.00f;
    this->mCrouchAmount = 0.00f;
    this->bIsActive = false;
    this->bIsMoving = false;
    this->mLandType = EFallType::Light;
    this->mConcussiveLandType = EAnimConcussiveLandType::Normal;
    this->mFallHeight = 0.00f;
}

