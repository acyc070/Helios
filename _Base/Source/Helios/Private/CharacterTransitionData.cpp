#include "CharacterTransitionData.h"

FCharacterTransitionData::FCharacterTransitionData() {
    this->mUseAtlasTransition = false;
    this->mTransitionMask = 0;
    this->mTranslationSpeed = 0.00f;
    this->mRotationSpeed = 0.00f;
    this->mTransitionTimeOut = 0.00f;
    this->mTransitionDuration = 0.00f;
    this->mPreciseAlignWithRootMotion = false;
    this->mPreciseAlignWithRootMotionAnimation = NULL;
    this->mPreciseAlignWithRootMotionBlendInTime = 0.00f;
    this->mPreciseAlignWithRootMotionBlendOutTime = 0.00f;
    this->mComponentTarget = NULL;
}

