#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "OnPlayerSpawnedDelegate.h"
#include "SpawningSystemsLibrary.generated.h"

class AControlledPawn;
class AHeliosPlayerStart;
class UObject;

UCLASS(Blueprintable)
class HELIOS_API USpawningSystemsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawningSystemsLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnbindFromOnPlayerSpawned(const FOnPlayerSpawned& Callback, UObject* callingObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void TriggerOnPlayerSpawn(UObject* WorldContext, bool triggerImmediatelyIfPawnExists, bool onlyTriggerOnce, FLatentActionInfo LatentInfo, AControlledPawn*& PlayerPawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RespawnPlayer(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void CreateCheckpoint(AHeliosPlayerStart* PlayerStart);
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnPlayerSpawned(const FOnPlayerSpawned& Callback, UObject* callingObject);
    
};

