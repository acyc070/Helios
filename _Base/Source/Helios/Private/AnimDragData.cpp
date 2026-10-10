#include "AnimDragData.h"

FAnimDragData::FAnimDragData() {
    this->mIsDragging = false;
    this->mIsPassiveGrabbing = false;
    this->mJustHitSomething = false;
    this->mUseBackwardsAnims = false;
    this->mDragSpeed = 0.00f;
    this->mInitType = EAnimDragInitType::Stand;
    this->mAnimState = EAnimDragState::None;
    this->mVelocityAngle = 0.00f;
    this->mBackStepAngle = 0.00f;
    this->mImpactAngle = 0.00f;
    this->mDraggableVelocity = 0.00f;
    this->mWasHittingSomething = false;
    this->mIsPushPanel = false;
}

