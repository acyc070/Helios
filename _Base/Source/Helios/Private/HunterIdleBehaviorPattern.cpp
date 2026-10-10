#include "HunterIdleBehaviorPattern.h"

UHunterIdleBehaviorPattern::UHunterIdleBehaviorPattern() {
    this->mIdleAnimation = NULL;
    this->mLoop = false;
    this->mMaxDuration = -1.00f;
    this->mRootMotion = EMovementRestriction::PhysicalMovement;
}


