#include "AnimAttackData.h"

FAnimAttackData::FAnimAttackData() {
    this->mWantsToAttack = false;
    this->mWantsToKill = false;
    this->mAngleToTarget = 0.00f;
    this->mDistanceToTarget = 0.00f;
    this->mHeightLevel = EHeightLevel::UnreachableLow;
    this->mWantsToGrab = false;
    this->mIsCloseKill = false;
    this->mIsBlockedGrab = false;
    this->mWantsToAbortGrab = false;
    this->mBiteHold = false;
    this->mBiteAngle = 0.00f;
    this->mBiteDistance = 0.00f;
}

