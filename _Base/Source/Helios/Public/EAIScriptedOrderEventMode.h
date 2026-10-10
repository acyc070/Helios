#pragma once
#include "CoreMinimal.h"
#include "EAIScriptedOrderEventMode.generated.h"

UENUM()
enum class EAIScriptedOrderEventMode {
    StartOrQueueOrder,
    StopActiveOrders,
    StopAllOrders,
    MAX,
};

