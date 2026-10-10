#pragma once
#include "CoreMinimal.h"
#include "EJumpBuffer.generated.h"

UENUM()
enum class EJumpBuffer {
    None,
    Jump,
    CancelJump,
};

