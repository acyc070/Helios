#pragma once
#include "CoreMinimal.h"
#include "EAttentionEventType.generated.h"

UENUM()
enum class EAttentionEventType {
    Invalid,
    Focus,
    Dismiss,
    MAX,
};

