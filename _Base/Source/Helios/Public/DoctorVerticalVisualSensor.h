#pragma once
#include "CoreMinimal.h"
#include "BaseVisualSensor.h"
#include "DoctorVerticalVisualSensor.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UDoctorVerticalVisualSensor : public UBaseVisualSensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UDoctorVerticalVisualSensor();

};

