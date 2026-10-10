#include "HeliosWorldSettings.h"

AHeliosWorldSettings::AHeliosWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mLowPerformanceMode = false;
    this->mEnableFPSCounter = true;
    this->mEnableCrossLevelObjectsManager = false;
    this->mGlobalAmbience = NULL;
    this->mAmbiencePitch = 0;
    this->mGlobalAmbienceVolume = 1.00f;
    this->mGlobalReverb = NULL;
    this->mSendLevel = 0.50f;
    this->mDefaultPhysicsMaterial = TEXT("No Material Assigned");
}


