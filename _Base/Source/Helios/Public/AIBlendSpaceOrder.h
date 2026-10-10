#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "CustomBlendspaceOptions.h"
#include "AIBlendSpaceOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIBlendSpaceOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBlendspaceOptions mOrder;
    
    UAIBlendSpaceOrder();

};

