#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HeliosCollectiblesBPLibrary.generated.h"

class ULevelFlagAsset;

UCLASS(Blueprintable)
class HELIOS_API UHeliosCollectiblesBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeliosCollectiblesBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetTotalMasksAmount(bool& success, int32& Amount, ULevelFlagAsset* LevelFlag);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollectedMasksAmount(bool& success, int32& Amount, ULevelFlagAsset* LevelFlag);
    
    UFUNCTION(BlueprintPure)
    static FString GetAutomationLevel();
    
};

