#pragma once
#include "CoreMinimal.h"
#include "AISensor.h"
#include "GrabbedObjectSensor.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGrabbedObjectSensor : public UAISensor {
    GENERATED_BODY()
public:
    UGrabbedObjectSensor();

};

