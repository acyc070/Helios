#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KosmosBlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class KOSMOSGAMEPLUGIN_API UKosmosBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKosmosBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalGravityDirection(FVector InGravity, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetGlobalGravityDirection(UObject* WorldContextObject);
    
};

