#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EHeliosDLC.h"
#include "Templates/SubclassOf.h"
#include "OverseerBlueprintLibrary.generated.h"

class AControlledPawn;
class APlayerController;
class APlayerPawnController;
class UObject;

UCLASS(Blueprintable)
class HELIOS_API UOverseerBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOverseerBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SwapPlayerPawn(UObject* WorldContext, TSoftClassPtr<AControlledPawn> newPawnClass, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllowPause(bool bAllowPause);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void RetriggerableDelayResetOnWorldReloaded(UObject* WorldContext, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static bool IsDLCEnabled(EHeliosDLC dlc);
    
    UFUNCTION(BlueprintPure)
    static AControlledPawn* GetHeliosPlaypalPawn();
    
    UFUNCTION(BlueprintPure)
    static AControlledPawn* GetHeliosPlayerPawn();
    
    UFUNCTION(BlueprintPure)
    static APlayerPawnController* GetHeliosPlayerController();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void DelayResetOnWorldReloaded(UObject* WorldContext, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateCameraPlayer(const UObject* WorldContextObject, TSubclassOf<APlayerController> InPlayerControllerClass, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanPause();
    
};

