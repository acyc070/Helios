#pragma once
#include "CoreMinimal.h"
#include "GenericGameEvent.h"
#include "AIScriptedOrderEvent.generated.h"

class UAIScriptedOrder;

USTRUCT(BlueprintType)
struct HELIOS_API FAIScriptedOrderEvent : public FGenericGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mScriptedOrder;
    
    FAIScriptedOrderEvent();
};

