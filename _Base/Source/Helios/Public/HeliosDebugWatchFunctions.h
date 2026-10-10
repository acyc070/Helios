#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HeliosDebugWatchFunctions.generated.h"

UCLASS(Blueprintable)
class UHeliosDebugWatchFunctions : public UObject {
    GENERATED_BODY()
public:
    UHeliosDebugWatchFunctions();

    UFUNCTION(Exec)
    static void Watch(const FString& UObjectName, const FString& UPropertyName);
    
};

