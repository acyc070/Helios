#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESKU.h"
#include "LevelNameReference.h"
#include "HeliosComplianceLayerBlueprintLibrary.generated.h"

class UHeliosComplianceLayer;

UCLASS(Blueprintable)
class HELIOS_API UHeliosComplianceLayerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeliosComplianceLayerBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPresenceString(FLevelNameReference LevelName);
    
    UFUNCTION(BlueprintPure)
    static bool IsEndSlateScreenBuild();
    
    UFUNCTION(BlueprintPure)
    static bool IsDemoBuild();
    
    UFUNCTION(BlueprintPure)
    static ESKU GetSkuRegion();
    
    UFUNCTION(BlueprintPure)
    static UHeliosComplianceLayer* GetComplianceLayer();
    
};

