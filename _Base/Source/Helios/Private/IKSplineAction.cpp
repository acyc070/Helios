#include "IKSplineAction.h"

UIKSplineAction::UIKSplineAction() {
    this->mUseStaticSpline = false;
    this->mIKTasksNumber = 0;
    this->mMaxGrabTime = 1.50f;
    this->mMaxGrabDistance = 1200.00f;
    this->mStartingDistance = 0.00f;
    this->mSplineComponent = NULL;
    this->mStaticSplineComponent = NULL;
}

void UIKSplineAction::SetStaticSpline(USplineComponent* staticSpline) {
}


