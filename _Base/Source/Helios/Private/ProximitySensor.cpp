#include "ProximitySensor.h"
#include "EStimulusSource.h"

UProximitySensor::UProximitySensor() {
    this->mName = TEXT("ProximitySensor");
    this->mCanIdentify = true;
    this->mStimulusSource = EStimulusSource::Proximity;
    this->mRadius = 0.00f;
    this->mDrawDebug = true;
    this->mShape = EProximitySensorShape::Sphere;
    this->mHeight = 0.00f;
}


