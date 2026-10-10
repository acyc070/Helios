#pragma once
#include "CoreMinimal.h"
#include "ESmartPointType.generated.h"

UENUM()
enum class ESmartPointType : uint8 {
    Generic,
    DefaultActivity,
    Standby,
    Explore,
    Search,
    Attack,
    Recover,
    Custom,
    HostileInvestigate,
    Hoist,
    MAX,
};

