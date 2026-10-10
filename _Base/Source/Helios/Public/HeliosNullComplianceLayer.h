#pragma once
#include "CoreMinimal.h"
#include "HeliosComplianceLayer.h"
#include "HeliosNullComplianceLayer.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UHeliosNullComplianceLayer : public UHeliosComplianceLayer {
    GENERATED_BODY()
public:
    UHeliosNullComplianceLayer();

};

