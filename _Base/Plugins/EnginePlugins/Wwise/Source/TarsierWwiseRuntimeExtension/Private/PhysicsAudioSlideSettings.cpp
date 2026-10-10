#include "PhysicsAudioSlideSettings.h"

FPhysicsAudioSlideSettings::FPhysicsAudioSlideSettings() {
    this->mEvent = NULL;
    this->mSpeedThreshold = 0;
    this->mMaxSpeed = 0;
    this->mGroundedTimeThreshold = 0.00f;
    this->mFadeoutTime = 0.00f;
    this->mInterpolationTime = 0.00f;
}

