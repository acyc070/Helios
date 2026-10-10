#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RoomVolumeControllerBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class HELIOS_API URoomVolumeControllerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URoomVolumeControllerBlueprintLibrary();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetRoomVolumeCustomValueVector(UObject* WorldContextObject, FName valueName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetRoomVolumeCustomValueFloat(UObject* WorldContextObject, FName valueName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceUpdateRoomVolume(UObject* WorldContextObject);
    
};

