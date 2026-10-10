#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LegalTextHelperFunctionLibrary.generated.h"

class UHeliosScrollBox;

UCLASS(Blueprintable)
class HELIOS_API ULegalTextHelperFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULegalTextHelperFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void FillLocalizedEULAText(UHeliosScrollBox* ScrollBox);
    
};

