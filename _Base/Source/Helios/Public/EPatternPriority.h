#pragma once
#include "CoreMinimal.h"
#include "EPatternPriority.generated.h"

UENUM()
enum class EPatternPriority : uint8 {
    Default,
    Engaged,
    Alert,
    Cooperation,
    Order,
    Reaction,
    Emergency,
    Override,
    MAX,
};

