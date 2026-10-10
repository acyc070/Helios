#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "OrdersAnalyzer.generated.h"

class UAIScriptedOrder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UOrdersAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mUnusedOrderTimeout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIScriptedOrder*> mQueuedScriptedOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIScriptedOrder* mNextScriptedOrder;
    
public:
    UOrdersAnalyzer();

};

