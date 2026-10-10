#include "DeathHandlerScript.h"

UDeathHandlerScript::UDeathHandlerScript() {
    this->mCountsAsAchievementDeath = true;
}



void UDeathHandlerScript::Ragdoll() {
}





AControlledPawn* UDeathHandlerScript::GetDyingPawn() const {
    return NULL;
}

FVector UDeathHandlerScript::GetDeathWorldDirection() const {
    return FVector{};
}

void UDeathHandlerScript::ConfirmKill() {
}


