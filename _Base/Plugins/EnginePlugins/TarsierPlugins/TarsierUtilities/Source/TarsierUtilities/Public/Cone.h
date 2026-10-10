#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cone.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FCone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector apex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector axisVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float baseRadius;
    
    FCone();
};

