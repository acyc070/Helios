#include "LevelUtilitiesBlueprintLibrary.h"

ULevelUtilitiesBlueprintLibrary::ULevelUtilitiesBlueprintLibrary() {
}

void ULevelUtilitiesBlueprintLibrary::UnbindOnWorldReloaded(const FOnWorldReloaded& Callback, UObject* callingObject) {
}

UChalkboardWrapper* ULevelUtilitiesBlueprintLibrary::GetLevelChalkboard(UObject* callingObject) {
    return NULL;
}

UChalkboardWrapper* ULevelUtilitiesBlueprintLibrary::GetCrossLevelChalkboard(UObject* callingObject) {
    return NULL;
}

FString ULevelUtilitiesBlueprintLibrary::GetActorSublevel(const AActor* Actor) {
    return TEXT("");
}

void ULevelUtilitiesBlueprintLibrary::BindOnWorldReloaded(const FOnWorldReloaded& Callback, UObject* callingObject) {
}


