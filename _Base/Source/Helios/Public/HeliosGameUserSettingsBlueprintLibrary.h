#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HeliosGameUserSettingsBlueprintLibrary.generated.h"

class UHeliosGameUserSettings;

UCLASS(Blueprintable)
class HELIOS_API UHeliosGameUserSettingsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeliosGameUserSettingsBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static UHeliosGameUserSettings* GetHeliosGameUserSettings();
    
};

