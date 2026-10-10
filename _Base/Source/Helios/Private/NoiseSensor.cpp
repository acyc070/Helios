#include "NoiseSensor.h"
#include "EStimulusSource.h"

UNoiseSensor::UNoiseSensor() {
    this->mName = TEXT("NoiseSensor");
    this->mStimulusSource = EStimulusSource::Noise;
    this->mLoudRadius = 1000.00f;
    this->mWeakRadius = 500.00f;
    this->mSensorShape = ENoiseSensorShape::Sphere;
    this->mDrawDebug = true;
}

void UNoiseSensor::OnNoiseEvent(const FNoiseEvent& NoiseEvent, float EventDistance) {
}


