#include "HeliosGameInstance.h"

UHeliosGameInstance::UHeliosGameInstance() {
    this->mGameState = EHeliosGameState::AppStarting;
}

void UHeliosGameInstance::SetGameState(EHeliosGameState NewState) {
}

void UHeliosGameInstance::OnApplicationStateChange(bool activated) {
}

void UHeliosGameInstance::GetCurrentAreaForPlayer(FString& areaName) {
}


