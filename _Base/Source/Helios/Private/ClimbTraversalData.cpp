#include "ClimbTraversalData.h"

FClimbTraversalData::FClimbTraversalData() {
    this->mIsGrabbing = false;
    this->mIsAtTop = false;
    this->mWantClimbUp = false;
    this->mWantClimbDown = false;
    this->mWantClimbLeft = false;
    this->mWantClimbRight = false;
    this->mDropOffAnimPlayRate = 0.00f;
    this->mMovementBlockedReach = false;
    this->mWantReturnToPreviousRest = false;
    this->mIsJumpOffPrepare = false;
    this->mJumpOffTurnRight = false;
    this->mIsExiting = false;
    this->mExitType = EClimbExitTypes::ClimDownToGround;
    this->mIsClimbingALedge = false;
    this->mIsAutoTraversing = false;
    this->mClimbUpCounter = 0;
    this->mCurrentGrabHeight = 0.00f;
    this->mInitType = EPlayerClimbInitAnimType::None;
    this->mInitAngle = 0.00f;
    this->mInitDistance = 0.00f;
    this->mInitCrouchAmount = 0.00f;
    this->mAnimPlayRate = 0.00f;
}

