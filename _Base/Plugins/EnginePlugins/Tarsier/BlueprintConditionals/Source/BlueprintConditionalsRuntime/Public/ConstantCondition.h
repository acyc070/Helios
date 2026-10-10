#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "ConstantCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BLUEPRINTCONDITIONALSRUNTIME_API UConstantCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mValue;
    
public:
    UConstantCondition();

};

