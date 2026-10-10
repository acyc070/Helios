#include "AnimJumpData.h"

FAnimJumpData::FAnimJumpData() {
    this->mIsActive = false;
    this->mIsVertical = false;
    this->mSpeed = 0.00f;
    this->mVelocityAngle = 0.00f;
    this->mJumpCommitmentTime = 0.00f;
    this->mIsJumpPreparing = false;
    this->mShouldBunnyHopStumble = false;
}

