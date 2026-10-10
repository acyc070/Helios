#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderHandle.generated.h"

class UAIScriptedOrder;

USTRUCT(BlueprintType)
struct HELIOS_API FAIScriptedOrderHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mScriptedOrderShared;
    
    FAIScriptedOrderHandle();
};

