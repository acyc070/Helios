#pragma once
#include "CoreMinimal.h"
#include "GenericWorldEvent.h"
#include "GenericGestureEvent.generated.h"

class AControlledPawn;

USTRUCT(BlueprintType)
struct HELIOS_API FGenericGestureEvent : public FGenericWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AControlledPawn* mGesturingPawn;
    
    FGenericGestureEvent();
};

