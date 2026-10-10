#include "AnimLookData.h"

FAnimLookData::FAnimLookData() {
    this->mAlpha = 0.00f;
    this->mPitch = 0.00f;
    this->mYaw = 0.00f;
    this->mCurrentLookAtOverrideType = ELookAtBlendSpaceOverrideType::None;
    this->mCurrentLookAtMode = ELookinatorMode::None;
}

