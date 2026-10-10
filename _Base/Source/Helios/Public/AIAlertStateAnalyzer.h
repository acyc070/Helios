#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "AlertStateProperties.h"
#include "EAIAlertState.h"
#include "AIAlertStateAnalyzer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAIAlertStateAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAIAlertState, FAlertStateProperties> AIAlertStateProperties;
    
public:
    UAIAlertStateAnalyzer();

};

