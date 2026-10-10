#pragma once
#include "CoreMinimal.h"
#include "LedgeSegment.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FLedgeSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mSegmentInfo;
    
    FLedgeSegment();
};

