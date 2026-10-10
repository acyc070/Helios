#include "AnimWalkStartData.h"

FAnimWalkStartData::FAnimWalkStartData() {
    this->mIsActive = false;
    this->mAngle = 0.00f;
    this->mCurrentAngle = 0.00f;
    this->mCurrentWalkStartIndex = 0;
    this->mWantedWalkStartIndex = 0;
    this->mBlendSpaceOverride = EBlendSpaceOverrideType::LocomotionInvalid;
    this->mBlendSpaceOverrideCrouch = EBlendSpaceOverrideType::LocomotionInvalid;
    this->mWalkStartType = EWalkStartType::None;
}

