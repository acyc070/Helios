#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "CannedAnimationOptions.h"
#include "AICannedAnimationOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAICannedAnimationOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCannedAnimationOptions mOrder;
    
    UAICannedAnimationOrder();

};

