#pragma once
#include "CoreMinimal.h"
#include "EBalanceBeamState.generated.h"

UENUM()
enum EBalanceBeamState {
    Idle,
    InRangeButNotBalancing,
    InRangeAndBalancing,
};

