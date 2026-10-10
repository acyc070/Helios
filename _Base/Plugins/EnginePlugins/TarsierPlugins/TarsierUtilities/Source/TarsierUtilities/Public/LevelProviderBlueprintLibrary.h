#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelProvider.h"
#include "LevelProviderBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class TARSIERUTILITIES_API ULevelProviderBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelProviderBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static FLevelProvider MakeLevelProvider(FLevelProvider LevelProvider);
    
};

