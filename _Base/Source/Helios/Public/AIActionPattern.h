#pragma once
#include "CoreMinimal.h"
#include "AIBaseReactivePattern.h"
#include "AIActionPattern.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAIActionPattern : public UAIBaseReactivePattern {
    GENERATED_BODY()
public:
    UAIActionPattern();

};

