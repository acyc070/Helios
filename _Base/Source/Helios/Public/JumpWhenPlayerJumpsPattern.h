#pragma once
#include "CoreMinimal.h"
#include "AIReactivePattern.h"
#include "JumpWhenPlayerJumpsPattern.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UJumpWhenPlayerJumpsPattern : public UAIReactivePattern {
    GENERATED_BODY()
public:
    UJumpWhenPlayerJumpsPattern();

};

