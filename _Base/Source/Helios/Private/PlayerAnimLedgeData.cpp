#include "PlayerAnimLedgeData.h"

FPlayerAnimLedgeData::FPlayerAnimLedgeData() {
    this->mIsGrabbingOnFloor = false;
    this->mIsHanging = false;
    this->mIsFreeHang = false;
    this->mExitCurrentClimbToHang = false;
    this->mDesiredClimbBlocked = false;
    this->mReleasedGrab = false;
    this->mExitCrouchAmount = 0.00f;
    this->mLedgeHeight = 0.00f;
    this->mClimbAnimation = NULL;
    this->mIsGroundedBlocked = false;
}

