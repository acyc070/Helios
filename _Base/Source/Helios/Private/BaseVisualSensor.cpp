#include "BaseVisualSensor.h"
#include "EStimulusSource.h"

UBaseVisualSensor::UBaseVisualSensor() {
    this->mName = TEXT("VisualSensor");
    this->mCanIdentify = true;
    this->mStimulusSource = EStimulusSource::Visual;
    this->mVisionRaycastCollisionChannel = ECC_WorldStatic;
}


