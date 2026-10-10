#include "AkAudioMeterComponent.h"

UAkAudioMeterComponent::UAkAudioMeterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabled = true;
    this->mMeterType = EMeteringTypes::AK_EnableBusMeter_Peak;
    this->mMeterLevel = 0.00f;
    this->mMeterMultiplier = 1.00f;
}

void UAkAudioMeterComponent::SetState(bool inEnabled) {
}


