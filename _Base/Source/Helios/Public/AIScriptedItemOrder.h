#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "EAIItemInteraction.h"
#include "HelComponentReference.h"
#include "AIScriptedItemOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedItemOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIItemInteraction mInteraction;
    
    UAIScriptedItemOrder();

};

