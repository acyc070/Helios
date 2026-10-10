#include "ShootAfterAimingPattern.h"
#include "EPatternPriority.h"

UShootAfterAimingPattern::UShootAfterAimingPattern() {
    this->mPriority = EPatternPriority::Emergency;
    this->mInterrupter = true;
    this->mAimingTime = 2.00f;
    this->mMaxLostLOFTime = 0.50f;
    this->mPauseTimeAfterShot = 1.00f;
    this->mFirearm = NULL;
}


