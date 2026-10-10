#pragma once
#include "CoreMinimal.h"
#include "EGameEventType.h"
#include "WorldEventReceiverProxy.generated.h"

class UWorldEventReceiver;

USTRUCT(BlueprintType)
struct FWorldEventReceiverProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldEventReceiver* mEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    EGameEventType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mRange;
    
    HELIOS_API FWorldEventReceiverProxy();
};

