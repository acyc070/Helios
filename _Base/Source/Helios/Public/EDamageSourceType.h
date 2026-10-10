#pragma once
#include "CoreMinimal.h"
#include "EDamageSourceType.generated.h"

UENUM()
enum class EDamageSourceType : uint8 {
    Unspecified,
    ShotgunBlast,
    Fall,
    Impact,
    MeleeHit,
    Explosion,
    Grabbed,
    Electricity,
    MAX,
};

