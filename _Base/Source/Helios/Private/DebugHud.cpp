#include "DebugHud.h"

ADebugHud::ADebugHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
}

bool ADebugHud::IsShippingGame() {
    return false;
}

FString ADebugHud::GetPlatformString() {
    return TEXT("");
}

FString ADebugHud::GetGameVersion() {
    return TEXT("");
}


