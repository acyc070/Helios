#include "InGameGameMode.h"

AInGameGameMode::AInGameGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = false;
}


