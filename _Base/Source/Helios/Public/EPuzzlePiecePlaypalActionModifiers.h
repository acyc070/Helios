#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePiecePlaypalActionModifiers.generated.h"

UENUM()
enum class EPuzzlePiecePlaypalActionModifiers : uint8 {
    ActionMod_Same,
    ActionMod_Test,
    ActionMod_Closer,
    ActionMod_Run,
    ActionMod_Point,
};

