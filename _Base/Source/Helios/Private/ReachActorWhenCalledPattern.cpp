#include "ReachActorWhenCalledPattern.h"
#include "EPatternPriority.h"

UReachActorWhenCalledPattern::UReachActorWhenCalledPattern() {
    this->mPriority = EPatternPriority::Cooperation;
    this->CallMemoryTime = 3.00f;
    this->IgnoreDistance = 200.00f;
}


