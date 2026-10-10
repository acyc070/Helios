#pragma once
#include "CoreMinimal.h"
#include "BaseVisualSensor.h"
#include "VisualFieldSettings.h"
#include "VisualSensorField.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UVisualSensorField : public UBaseVisualSensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualFieldSettings mVisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDrawDebug;
    
    UVisualSensorField();

};

