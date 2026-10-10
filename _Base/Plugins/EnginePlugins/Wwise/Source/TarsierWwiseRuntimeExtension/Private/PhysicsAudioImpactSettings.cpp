#include "PhysicsAudioImpactSettings.h"

FPhysicsAudioImpactSettings::FPhysicsAudioImpactSettings() {
    this->mEvent = NULL;
    this->mVelocityThreshold = 0.00f;
    this->mMaxVelocity = 0.00f;
    this->mCooldownTime = 0.00f;
    this->mUseSpeedForRTPC = false;
    this->mImpactDistanceThreshold = 0.00f;
}

