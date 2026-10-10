#include "AnimationOverrideData.h"

FAnimationOverrideData::FAnimationOverrideData() {
    this->AnimationToPlay = NULL;
    this->mWantsToPlayOverride = false;
    this->mAbortOverride = false;
    this->mIsPlayingOverride = false;
    this->mIsLoopingOverride = false;
    this->mEnterBlendTime = 0.00f;
    this->mExitBlendTime = 0.00f;
    this->mAnimationOverrideType = EAnimationOverrideType::None;
    this->mOverrideBlendspaceValueX = 0.00f;
    this->mOverrideBlendspaceValueY = 0.00f;
    this->mFinishLoop = false;
}

