#include "GrabUnderTheBedPattern.h"

UGrabUnderTheBedPattern::UGrabUnderTheBedPattern() {
    this->mIKIDTask = EIKTaskIdentifier::IK_TARGET_INVALID;
    this->mTargetCPawn = NULL;
    this->mGrabActorComponent = NULL;
}


