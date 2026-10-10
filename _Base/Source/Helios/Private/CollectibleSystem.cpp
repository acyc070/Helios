#include "CollectibleSystem.h"

UCollectibleSystem::UCollectibleSystem() {
}

TArray<FCollectibleData> UCollectibleSystem::GetCollectibles(const ECollectibleCategory Category) const {
    return TArray<FCollectibleData>();
}

TSet<FName> UCollectibleSystem::GetCollected(const ECollectibleCategory Category) const {
    return TSet<FName>();
}

void UCollectibleSystem::CollectActivity(const FName& UniqueId) {
}


