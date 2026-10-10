#include "GeneralLocomotionData.h"

FGeneralLocomotionData::FGeneralLocomotionData() {
    this->mMaxSpeedInUnits = 0.00f;
    this->mDesiredDeltaRotation = 0.00f;
    this->mLeanAngle = 0.00f;
    this->mSprintLeanFactor = 0.00f;
    this->mOnWalkableFloor = false;
    this->mDistanceToFloor = 0.00f;
    this->mDistanceToCeiling = 0.00f;
    this->mSpeed = 0.00f;
    this->mWalkStartRatio = 0.00f;
    this->mSprintRatio = 0.00f;
    this->mIsStrafing = false;
    this->mIsSprintPreparing = false;
    this->mIsGrabPreparing = false;
    this->mMovementMode = MOVE_None;
    this->mCustomMovementMode = ECustomMovementMode::None;
}

