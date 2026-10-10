#pragma once
#include "CoreMinimal.h"
#include "EActivityEndReason.generated.h"

UENUM()
enum class EActivityEndReason : uint8 {
    Completed,
    Failed,
    Abandoned,
};

