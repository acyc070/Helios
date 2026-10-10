#include "HangTraversalData.h"

FHangTraversalData::FHangTraversalData() {
    this->mTraverserMountAngle = 0.00f;
    this->mTraverserMountDistance = 0.00f;
    this->mTraverserHeight = 0.00f;
    this->mHangDistanceToFloor = 0.00f;
    this->mHangDistanceToFeet = 0.00f;
    this->mVelocityAngle = 0.00f;
    this->mSpeedRatio = 0.00f;
    this->mInputAngle = 0.00f;
    this->mIsGrabbing = false;
    this->mIsBlockHit = false;
    this->mImpactAngle = 0.00f;
    this->mReleaseType = EHangReleaseType::None;
}

