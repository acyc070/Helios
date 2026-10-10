#include "OverseerBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UOverseerBlueprintLibrary::UOverseerBlueprintLibrary() {
}

void UOverseerBlueprintLibrary::SwapPlayerPawn(UObject* WorldContext, TSoftClassPtr<AControlledPawn> newPawnClass, const FTransform& Transform) {
}

void UOverseerBlueprintLibrary::SetAllowPause(bool bAllowPause) {
}

void UOverseerBlueprintLibrary::RetriggerableDelayResetOnWorldReloaded(UObject* WorldContext, float Duration, FLatentActionInfo LatentInfo) {
}

bool UOverseerBlueprintLibrary::IsDLCEnabled(EHeliosDLC dlc) {
    return false;
}

AControlledPawn* UOverseerBlueprintLibrary::GetHeliosPlaypalPawn() {
    return NULL;
}

AControlledPawn* UOverseerBlueprintLibrary::GetHeliosPlayerPawn() {
    return NULL;
}

APlayerPawnController* UOverseerBlueprintLibrary::GetHeliosPlayerController() {
    return NULL;
}

void UOverseerBlueprintLibrary::DelayResetOnWorldReloaded(UObject* WorldContext, float Duration, FLatentActionInfo LatentInfo) {
}

void UOverseerBlueprintLibrary::CreateCameraPlayer(const UObject* WorldContextObject, TSubclassOf<APlayerController> InPlayerControllerClass, int32 ControllerId) {
}

bool UOverseerBlueprintLibrary::CanPause() {
    return false;
}


