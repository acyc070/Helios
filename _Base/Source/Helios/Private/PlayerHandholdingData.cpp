#include "PlayerHandholdingData.h"

FPlayerHandholdingData::FPlayerHandholdingData() {
    this->mIsDriver = false;
    this->mAngleToPartner = 0.00f;
    this->mLeanAngle = 0.00f;
    this->mDistanceToPartner = 0.00f;
    this->mSpeed = 0.00f;
    this->mHandholdingSide = EHandHoldingSide::RIGHT;
    this->mIsBeingPulled = false;
    this->mPassengerMovementState = EPassengerMovementState::None;
    this->mPassengerRotationSpeed = 0.00f;
}

