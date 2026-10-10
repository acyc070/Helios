#pragma once
#include "CoreMinimal.h"
#include "EIKTaskAggregationMode.generated.h"

UENUM()
enum class EIKTaskAggregationMode : uint8 {
    SumActive,
    MeanActive,
};

