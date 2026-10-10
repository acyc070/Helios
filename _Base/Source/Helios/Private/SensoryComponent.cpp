#include "SensoryComponent.h"
#include "Templates/SubclassOf.h"

USensoryComponent::USensoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabled = true;
    this->mSensedTypes = 0;
}

UAISensor* USensoryComponent::GetSensorByClass(TSubclassOf<UAISensor> SensorClass) const {
    return NULL;
}

UAISensor* USensoryComponent::GetSensor(const FName& Name) {
    return NULL;
}

void USensoryComponent::EnableSensor(const FName& Name) {
}

void USensoryComponent::DisableSensor(const FName& Name) {
}


