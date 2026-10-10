#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LedgeSegment.h"
#include "LedgeSpline.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FLedgeSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> mLedgePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLedgeSegment> mSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCloseLedgeSpline;
    
    FLedgeSpline();
};

