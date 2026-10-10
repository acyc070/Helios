#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "HeliosNavigationConfigBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosNavigationConfigBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeliosNavigationConfigBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static bool IsBackPressed(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintPure)
    static bool IsAcceptPressed(const FKeyEvent& InKeyEvent);
    
};

