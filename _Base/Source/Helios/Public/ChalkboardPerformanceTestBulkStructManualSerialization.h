#pragma once
#include "CoreMinimal.h"
#include "ChalkboardPerformanceTestBulkStructBase.h"
#include "ChalkboardPerformanceTestBulkStructManualSerialization.generated.h"

USTRUCT(BlueprintType)
struct FChalkboardPerformanceTestBulkStructManualSerialization : public FChalkboardPerformanceTestBulkStructBase {
    GENERATED_BODY()
public:
    HELIOS_API FChalkboardPerformanceTestBulkStructManualSerialization();
};

