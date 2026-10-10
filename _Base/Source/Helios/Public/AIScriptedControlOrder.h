#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "EAIControlOrderCommand.h"
#include "AIScriptedControlOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedControlOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIControlOrderCommand heldCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector moveInput;
    
    UAIScriptedControlOrder();

};

