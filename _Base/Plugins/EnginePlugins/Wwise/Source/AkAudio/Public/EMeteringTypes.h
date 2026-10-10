#pragma once
#include "CoreMinimal.h"
#include "EMeteringTypes.generated.h"

UENUM()
enum class EMeteringTypes : uint8 {
    AK_Default,
    AK_EnableBusMeter_Peak,
    AK_EnableBusMeter_TruePeak,
    AK_EnableBusMeter_RMS = 4,
    AK_EnableBusMeter_KPower = 16,
};

