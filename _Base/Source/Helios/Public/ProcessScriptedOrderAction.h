#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "ProcessScriptedOrderAction.generated.h"

class UAIScriptedOrder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UProcessScriptedOrderAction : public UAIActionPattern {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIActionPattern* mOrderMainAction;
    
public:
    UProcessScriptedOrderAction();

};

