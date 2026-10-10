#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "ProcessScriptedOrdersPattern.generated.h"

class UAIScriptedOrder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UProcessScriptedOrdersPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mExtraWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mOrderBeingProcessed;
    
public:
    UProcessScriptedOrdersPattern();

};

