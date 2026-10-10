#pragma once
#include "CoreMinimal.h"
#include "EOnDemandDetectionType.generated.h"

UENUM()
enum class EOnDemandDetectionType : uint8 {
    Investigate,
    Alert,
};

