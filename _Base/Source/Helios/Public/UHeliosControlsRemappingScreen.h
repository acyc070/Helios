#pragma once
#include "CoreMinimal.h"
#include "TarInputActionKeyMapping.h"
#include "TarInputAxisKeyMapping.h"
#include "HeliosMenuWidget.h"
#include "UHeliosControlsRemappingScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UUHeliosControlsRemappingScreen : public UHeliosMenuWidget {
    GENERATED_BODY()
public:
    UUHeliosControlsRemappingScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetMappingArrays();
    
public:
    UFUNCTION(BlueprintCallable)
    FTarInputAxisKeyMapping GetNextAvailableAxisMapping(const FName& AxisName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    FTarInputActionKeyMapping GetNextAvailableActionMapping(const FName& ActionName);
    
};

