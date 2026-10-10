#pragma once
#include "CoreMinimal.h"
#include "MetaCondition.h"
#include "OrCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BLUEPRINTCONDITIONALSRUNTIME_API UOrCondition : public UMetaCondition {
    GENERATED_BODY()
public:
    UOrCondition();

};

