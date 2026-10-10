#include "HeliosNavModifierComponent.h"
#include "NavAreas/NavArea_Null.h"

UHeliosNavModifierComponent::UHeliosNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mIsDynamic = false;
    this->mUpdateFrequency = 0.20f;
    this->mProjectToNavMesh = true;
    this->mAreaClass = UNavArea_Null::StaticClass();
    this->mNavigationData = NULL;
}

void UHeliosNavModifierComponent::OnNavigationDataUnregistered(ANavigationData* NavData) {
}

void UHeliosNavModifierComponent::OnNavigationDataRegistered(ANavigationData* NavData) {
}


