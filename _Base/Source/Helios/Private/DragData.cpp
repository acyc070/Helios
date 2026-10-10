#include "DragData.h"

FDragData::FDragData() {
    this->mIsDragging = false;
    this->mIsPassiveGrabbing = false;
    this->mJustImpact = false;
    this->mIsAdjustingPosition = false;
    this->mDragAngle = 0.00f;
    this->mDragSpeed = 0.00f;
    this->mGrabbedHelper = NULL;
    this->mInitialDragGrabSpeed = 0.00f;
}

