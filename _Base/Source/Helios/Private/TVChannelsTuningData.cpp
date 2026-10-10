#include "TVChannelsTuningData.h"

FTVChannelsTuningData::FTVChannelsTuningData() {
    this->mChannelMaterial = NULL;
    this->mChannelTexture = NULL;
    this->mChannelAudio = NULL;
    this->mChannelTolerance = 0.00f;
    this->mSweetspotDuration = 0.00f;
    this->mSweetspotRumble = 0.00f;
    this->mTuningX = 0.00f;
    this->mTuningY = 0.00f;
    this->hasFlickeringLight = false;
    this->mGravityMax = 0.00f;
    this->mCameraShake = 0.00f;
    this->mSpotMinIntensity = 0.00f;
    this->mSpotMaxIntensity = 0.00f;
    this->mPointMinIntensity = 0.00f;
    this->mPointMaxIntensity = 0.00f;
}

