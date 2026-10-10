#pragma once
#include "CoreMinimal.h"
#include "LookAction.h"
#include "AimAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAimAction : public ULookAction {
    GENERATED_BODY()
public:
    UAimAction();

};

