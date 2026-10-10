#include "PawnPropertiesComponent.h"

UPawnPropertiesComponent::UPawnPropertiesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PawnType = EPawnType::Unspecified;
    this->InfoChalkboardBlueprintWrapper = NULL;
}


