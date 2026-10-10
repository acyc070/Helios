#include "ObjectPropertiesComponent.h"

UObjectPropertiesComponent::UObjectPropertiesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mTypes = 0;
    this->mCharacteristics = 0;
    this->mDynamicCharacteristics = 0;
}

void UObjectPropertiesComponent::RemoveDynamicCharacteristic(EDynamicObjectCharacteristics characteristic) {
}

bool UObjectPropertiesComponent::HasDynamicCharacteristic(EDynamicObjectCharacteristics characteristic) const {
    return false;
}

int32 UObjectPropertiesComponent::GetDynamicCharacteristics() const {
    return 0;
}

void UObjectPropertiesComponent::AddDynamicCharacteristic(EDynamicObjectCharacteristics characteristic) {
}


