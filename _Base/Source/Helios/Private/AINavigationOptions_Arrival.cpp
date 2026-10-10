#include "AINavigationOptions_Arrival.h"

FAINavigationOptions_Arrival::FAINavigationOptions_Arrival() {
    this->mAllowRootMotionArrival = false;
    this->mAllowAlignmentTransition = false;
    this->mModulateArrivalSpeed = false;
    this->mUseWalkStopDistance = false;
    this->mEndMovementTransitionDuration = 0.00f;
    this->mMovementTransitionTime = EMovementTransitionTime::None;
}

