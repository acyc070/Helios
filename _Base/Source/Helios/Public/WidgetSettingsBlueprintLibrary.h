#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelUIData.h"
#include "WidgetAudioAssets.h"
#include "WidgetSettingsBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UWidgetSettingsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWidgetSettingsBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static FWidgetAudioAssets GetWidgetAudioAssets();
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumberOfSaveSlots();
    
    UFUNCTION(BlueprintPure)
    static TArray<FLevelUIData> GetLevelUIData();
    
};

