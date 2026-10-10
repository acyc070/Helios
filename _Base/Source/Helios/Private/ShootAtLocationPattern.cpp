#include "ShootAtLocationPattern.h"
#include "EPatternPriority.h"

UShootAtLocationPattern::UShootAtLocationPattern() {
    this->mPriority = EPatternPriority::Reaction;
    this->mInterrupter = true;
    this->mMinAimDuration = 0.50f;
}


