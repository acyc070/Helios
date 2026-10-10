#pragma once
#include "CoreMinimal.h"
#include "EAIGrabEventType.generated.h"

UENUM()
enum class EAIGrabEventType : uint8 {
    Attach,
    Detach,
    MAX,
};

