#include "PlayerCarryData.h"

FPlayerCarryData::FPlayerCarryData() {
    this->mInteractionType = EInteractAnimType::None;
    this->mPickupHoldStyle = EPickupHoldStyle::Light;
    this->mPickupState = EPickupState::Inactive;
    this->mDeltaZToHolder = 0.00f;
    this->mAngleToTarget = 0.00f;
}

