#include "TeacherGrabPattern.h"

UTeacherGrabPattern::UTeacherGrabPattern() {
    this->mMaxDistanceGrab = 10000.00f;
    this->mMinDistanceBite = 400.00f;
    this->mCloseDistanceGrab = 10000.00f;
    this->mIKTaskBlendout = 0.00f;
    this->mAttemptFinishedNotify = TEXT("Notify_AttackFinished");
    this->mOverrideGrabAnimation = NULL;
    this->mTarget = NULL;
}


