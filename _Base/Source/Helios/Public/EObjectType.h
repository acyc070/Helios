#pragma once
#include "CoreMinimal.h"
#include "EObjectType.generated.h"

UENUM()
enum class EObjectType {
    Character,
    PuzzlePiece,
    UseableReceiver,
    BalanceBeam,
    MAX,
};

