#include "PlayerInView.h"

FPlayerInView::FPlayerInView() {
    this->mEnabled = false;
    this->mMinMaxYaw = 0.00f;
    this->mMinMaxPitch = 0.00f;
    this->mInterpolationSpeed = 0.00f;
}

