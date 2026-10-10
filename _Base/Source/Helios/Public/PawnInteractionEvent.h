#pragma once
#include "CoreMinimal.h"
#include "EPawnInteractionState.h"
#include "GenericPawnEvent.h"
#include "PawnInteractionEvent.generated.h"

class AHeliosInteraction;

USTRUCT(BlueprintType)
struct HELIOS_API FPawnInteractionEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnInteractionState mInteractionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeliosInteraction* mInteraction;
    
    FPawnInteractionEvent();
};

