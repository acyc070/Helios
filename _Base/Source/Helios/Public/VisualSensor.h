#pragma once
#include "CoreMinimal.h"
#include "Cone.h"
#include "BaseVisualSensor.h"
#include "VisualSensor.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UVisualSensor : public UBaseVisualSensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCone mVisionCone;
    
    UVisualSensor();

};

