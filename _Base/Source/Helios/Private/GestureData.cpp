#include "GestureData.h"

FGestureData::FGestureData() {
    this->mIsGesturing = false;
    this->mInitialTargetAngle = 0.00f;
    this->mUpdatedTargetAngle = 0.00f;
    this->mGestureSide = EGestureSide::None;
    this->mUseShoutGesture = false;
    this->mUseRejectGesture = false;
}

