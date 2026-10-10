#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelProvider.h"
#include "SublevelInvisibilityHandle.h"
#include "SublevelInvisibileRequestsBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class USublevelInvisibileRequestsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USublevelInvisibileRequestsBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ReleaseHidLevelRequest(UPARAM(Ref) FSublevelInvisibilityHandle& Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FSublevelInvisibilityHandle HideSublevel(FLevelProvider sublevel, UObject* WorldContext);
    
};

