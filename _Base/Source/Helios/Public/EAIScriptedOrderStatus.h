#pragma once
#include "CoreMinimal.h"
#include "EAIScriptedOrderStatus.generated.h"

UENUM()
enum class EAIScriptedOrderStatus {
    Created,
    Queued,
    NextInLine,
    InProgress,
    Completed,
    Aborted,
};

