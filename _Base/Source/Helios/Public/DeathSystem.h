#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDamageSourceType.h"
#include "DeathSystem.generated.h"

class AControlledPawn;
class UDeathHandlerDataAsset;

UCLASS(Blueprintable)
class HELIOS_API UDeathSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDeathSystem();

    UFUNCTION(BlueprintCallable)
    static void Kill(AControlledPawn* Pawn, TSoftObjectPtr<UDeathHandlerDataAsset> handlerDataAsset, FVector WorldDirection, EDamageSourceType CauseOfDeath, bool forceKill);
    
    UFUNCTION(BlueprintPure)
    static bool IsPawnAlive(const AControlledPawn* Pawn);
    
};

