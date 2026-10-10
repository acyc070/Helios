#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HeliosNavModifierShape.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class HELIOS_API UHeliosNavModifierShape : public UObject {
    GENERATED_BODY()
public:
    UHeliosNavModifierShape();

};

