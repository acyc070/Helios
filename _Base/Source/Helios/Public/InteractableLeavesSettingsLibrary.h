#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InteractableLeavesSettingsLibrary.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UInteractableLeavesSettingsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractableLeavesSettingsLibrary();

    UFUNCTION(BlueprintPure)
    static int32 GetMaximumActivatedLeaves();
    
};

