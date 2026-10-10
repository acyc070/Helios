#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "AIScriptedWaitOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedWaitOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TimeLimited;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval WaitTime;
    
    UAIScriptedWaitOrder();

};

