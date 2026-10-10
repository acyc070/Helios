#pragma once
#include "CoreMinimal.h"
#include "ETVState.generated.h"

UENUM()
enum class ETVState : uint8 {
    TVState_Off,
    TVState_Noise,
    TVState_Partial_Connection,
    TVState_Connection_Master,
    TVState_Connection_Slave,
    TVState_Locked,
    TVState_Broken,
};

