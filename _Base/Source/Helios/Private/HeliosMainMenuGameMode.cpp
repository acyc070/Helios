#include "HeliosMainMenuGameMode.h"

AHeliosMainMenuGameMode::AHeliosMainMenuGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AHeliosMainMenuGameMode::GetSkipTitleScreenFlag() {
    return false;
}

void AHeliosMainMenuGameMode::AllowSkippingNextTitleScreen() {
}


