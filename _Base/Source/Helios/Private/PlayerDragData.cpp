#include "PlayerDragData.h"

FPlayerDragData::FPlayerDragData() {
    this->mIsDragging = false;
    this->mIsGrabbing = false;
    this->mIsPassiveGrabbing = false;
    this->mDragAngle = 0.00f;
    this->mDragSpeed = 0.00f;
}

