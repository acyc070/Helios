#include "PerceptionAnalyzer.h"

UPerceptionAnalyzer::UPerceptionAnalyzer() {
    this->mIgnoredPawnTypes = 0;
    this->mTimeBeforeIdentification = 0.20f;
    this->mTimeBeforeIdentificationLost = 1.50f;
    this->mTimeBeforeLosingVision = 0.10f;
    this->mTimeBeforeForgetting = 10.00f;
    this->mTimeToLoudNoiseDetection = 0.25f;
    this->mTimeToWeakNoiseDetection = 0.50f;
    this->mLoudNoiseDetectionDelta = 0.40f;
    this->mWeakNoiseDetectionDelta = 0.20f;
    this->mNoiseStrengthToIdentify = 4;
    this->mEnabledNoiseTags = 1;
    this->mDrawDebug = true;
    this->mSensors = NULL;
}

void UPerceptionAnalyzer::OnNoiseEvent(const FNoiseEvent& NoiseEvent, float EventDistance) {
}

void UPerceptionAnalyzer::OnDetectionOnDemand(FVector Location, AActor* Actor, EOnDemandDetectionType detectionType) {
}


