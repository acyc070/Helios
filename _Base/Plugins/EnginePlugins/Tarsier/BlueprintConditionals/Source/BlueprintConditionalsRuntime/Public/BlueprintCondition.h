#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlueprintCondition.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class BLUEPRINTCONDITIONALSRUNTIME_API UBlueprintCondition : public UObject {
    GENERATED_BODY()
public:
    UBlueprintCondition();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool Evaluate() const;
    
};

