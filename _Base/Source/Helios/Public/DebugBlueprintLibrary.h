#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDebugPlaySessionType.h"
#include "DebugBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UDebugBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ToggleMarketingCameraFlyModeDisable();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DebugFilter(const UObject* WorldContext, EDebugPlaySessionType& outExec);
    
};

