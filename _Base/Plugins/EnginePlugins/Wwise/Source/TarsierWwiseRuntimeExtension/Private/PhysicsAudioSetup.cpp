#include "PhysicsAudioSetup.h"

FPhysicsAudioSetup::FPhysicsAudioSetup() {
    this->mEnabled = false;
    this->mEnableGroundChecks = false;
    this->mEnableImpacts = false;
    this->mEnableSlide = false;
    this->mEnableRoll = false;
    this->mEnableMaterialSwitch = false;
    this->mInitialDelay = 0.00f;
    this->mDebugPhysicsData = false;
    this->mTickOnlyWhenAwake = false;
}

