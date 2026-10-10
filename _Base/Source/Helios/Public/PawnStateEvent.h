#pragma once
#include "CoreMinimal.h"
#include "EPawnStateEventType.h"
#include "GenericPawnEvent.h"
#include "PawnStateEvent.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FPawnStateEvent : public FGenericPawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStateEventType mPawnEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mPawnStateOnOff;
    
    FPawnStateEvent();
};

