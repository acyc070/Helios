#include "AnimNode_HeliosBlendspaceOverride.h"

FAnimNode_HeliosBlendspaceOverride::FAnimNode_HeliosBlendspaceOverride() {
    this->mDefaultBlendspace = NULL;
    this->mTestBlendspace = NULL;
    this->mBlendspaceOverrideType = EBlendSpaceOverrideType::LocomotionInvalid;
    this->mActiveBlendspace = NULL;
    this->mHasSerializedNewDataYet = false;
    this->mX = 0.00f;
    this->mY = 0.00f;
    this->mZ = 0.00f;
    this->mShouldSnapshotBlendspaceInputs = false;
    this->mResetBlendSpaceInputsWhenBlendSpaceChanges = false;
    this->mLockedX = 0.00f;
    this->mLockedY = 0.00f;
    this->mLockedZ = 0.00f;
    this->bUseManualTimeRatio = false;
    this->ManualTimeRatio = 0.00f;
    this->mBlendInTime = 0.00f;
    this->mBlendOutTime = 0.00f;
    this->mPlayRate = 0.00f;
    this->mLoop = false;
    this->mStartPosition = 0.00f;
    this->mResetPlayTimeWhenBlendSpaceChanges = false;
    this->mOwnerPawn = NULL;
}

