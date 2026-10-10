#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrder.h"
#include "LocomotionState.h"
#include "AIScriptedLocomotionModeOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedLocomotionModeOrder : public UAIScriptedOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionMode;
    
    UAIScriptedLocomotionModeOrder();

};

