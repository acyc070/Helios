#pragma once
#include "CoreMinimal.h"
#include "TransitionToStateCollection.generated.h"

class UState;
class UTransition;

USTRUCT(BlueprintType)
struct FTransitionToStateCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTransition*, UState*> mTransitionsToState;
    
    HELIOS_API FTransitionToStateCollection();
};

