#pragma once
#include "CoreMinimal.h"
#include "ELeechBehaviourState.generated.h"

UENUM()
enum class ELeechBehaviourState : uint8 {
    StartupWaiting,
    StartupActivating,
    Idle,
    Falling,
    Standing,
    Chase,
    Attaching,
    Attached,
    Swarm,
    Kill,
    Dead,
};

