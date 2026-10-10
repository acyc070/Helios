#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HeliosActorReference.h"
#include "HeliosActorReferenceLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UHeliosActorReferenceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHeliosActorReferenceLibrary();

    UFUNCTION(BlueprintPure)
    static FHeliosActorReference MakeHeliosActorReference(FHeliosActorReference actorReference);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FHeliosActorReference& actorReference);
    
    UFUNCTION(BlueprintPure)
    static bool IsNull(const FHeliosActorReference& actorReference);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetActor(const FHeliosActorReference& actorReference, bool bForceCLO);
    
};

