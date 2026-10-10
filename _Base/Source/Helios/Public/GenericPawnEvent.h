#pragma once
#include "CoreMinimal.h"
#include "GenericWorldEvent.h"
#include "GenericPawnEvent.generated.h"

class AControlledPawn;
class APawn;

USTRUCT(BlueprintType)
struct HELIOS_API FGenericPawnEvent : public FGenericWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* mPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AControlledPawn* mControlledPawn;
    
    FGenericPawnEvent();
};

