#pragma once
#include "CoreMinimal.h"
#include "ETransitionFlags.generated.h"

UENUM()
enum class ETransitionFlags {
    UseTransitionInZ,
    UseStrafingMovement,
    UsePureLerpMovement,
};

