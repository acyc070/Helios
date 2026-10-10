#pragma once
#include "CoreMinimal.h"
#include "GenericGameEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FGenericGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCustomEventID;
    
    FGenericGameEvent();
};

