#include "CollectibleComponent.h"

UCollectibleComponent::UCollectibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollectibleCategory = ECollectibleCategory::Masks;
}

bool UCollectibleComponent::IsCollected() const {
    return false;
}

bool UCollectibleComponent::Collect() {
    return false;
}


