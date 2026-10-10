#include "DeathSystem.h"

UDeathSystem::UDeathSystem() {
}

void UDeathSystem::Kill(AControlledPawn* Pawn, TSoftObjectPtr<UDeathHandlerDataAsset> handlerDataAsset, FVector WorldDirection, EDamageSourceType CauseOfDeath, bool forceKill) {
}

bool UDeathSystem::IsPawnAlive(const AControlledPawn* Pawn) {
    return false;
}


