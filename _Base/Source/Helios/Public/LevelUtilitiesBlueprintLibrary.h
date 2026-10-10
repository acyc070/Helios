#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnWorldReloadedDelegate.h"
#include "LevelUtilitiesBlueprintLibrary.generated.h"

class AActor;
class UChalkboardWrapper;
class UObject;

UCLASS(Blueprintable)
class HELIOS_API ULevelUtilitiesBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelUtilitiesBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnbindOnWorldReloaded(const FOnWorldReloaded& Callback, UObject* callingObject);
    
    UFUNCTION(BlueprintPure)
    static UChalkboardWrapper* GetLevelChalkboard(UObject* callingObject);
    
    UFUNCTION(BlueprintPure)
    static UChalkboardWrapper* GetCrossLevelChalkboard(UObject* callingObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetActorSublevel(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void BindOnWorldReloaded(const FOnWorldReloaded& Callback, UObject* callingObject);
    
};

