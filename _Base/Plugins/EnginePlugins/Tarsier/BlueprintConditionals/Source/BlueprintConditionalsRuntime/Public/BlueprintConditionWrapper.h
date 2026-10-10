#pragma once
#include "CoreMinimal.h"
#include "BlueprintConditionWrapper.generated.h"

class UBlueprintCondition;

USTRUCT(BlueprintType)
struct BLUEPRINTCONDITIONALSRUNTIME_API FBlueprintConditionWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlueprintCondition* mCondition;
    
    FBlueprintConditionWrapper();
};

