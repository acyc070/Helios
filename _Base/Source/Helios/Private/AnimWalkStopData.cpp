#include "AnimWalkStopData.h"

FAnimWalkStopData::FAnimWalkStopData() {
    this->mIsActive = false;
    this->mFinalAngle = 0.00f;
    this->mTurnAngle = 0.00f;
    this->mDistanceToStop = 0.00f;
    this->mWalkStopType = EWalkStopType::None;
    this->mWalkCycle = 0.00f;
}

