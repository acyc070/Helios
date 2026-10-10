#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPickupShapeLinePointType.h"
#include "PickupLineData.generated.h"

USTRUCT(BlueprintType)
struct FPickupLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickupShapeLinePointType mShapeType;
    
    HELIOS_API FPickupLineData();
};

