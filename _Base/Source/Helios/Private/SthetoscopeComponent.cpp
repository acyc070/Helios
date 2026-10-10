#include "SthetoscopeComponent.h"

USthetoscopeComponent::USthetoscopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mCurrentAnimation = EDoctorStethoscopeAnimEnum::DStethoscope_Loop;
}


