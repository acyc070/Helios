#pragma once
#include "CoreMinimal.h"
#include "MetaCondition.h"
#include "AndCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BLUEPRINTCONDITIONALSRUNTIME_API UAndCondition : public UMetaCondition {
    GENERATED_BODY()
public:
    UAndCondition();

};

