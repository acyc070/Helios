#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelProvider.h"
#include "SublevelActorsHidingRequestHandle.h"
#include "SublevelUtilities.generated.h"

class UObject;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API USublevelUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USublevelUtilities();

    UFUNCTION(BlueprintCallable)
    static void ReleaseActorsHidingRequest(FSublevelActorsHidingRequestHandle requestHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FSublevelActorsHidingRequestHandle HideAllActorsForSublevel(FLevelProvider sublevel, UObject* WorldContext, bool& success);
    
};

