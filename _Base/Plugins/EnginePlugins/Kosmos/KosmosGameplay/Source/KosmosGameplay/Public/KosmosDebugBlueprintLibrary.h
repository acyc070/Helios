#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKosmosDebugFilter.h"
#include "KosmosDebugBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class KOSMOSGAMEPLAY_API UKosmosDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKosmosDebugBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDebugFilterActive(EKosmosDebugFilter Filter, bool bIsActive);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugFilterActive(EKosmosDebugFilter Filter);
    
};

