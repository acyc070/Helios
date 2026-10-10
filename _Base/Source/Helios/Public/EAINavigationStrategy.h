#pragma once
#include "CoreMinimal.h"
#include "EAINavigationStrategy.generated.h"

UENUM()
enum class EAINavigationStrategy : uint8 {
    None,
    ReachLocation,
    MoveInDirection,
    FollowActor,
    FleeActor,
    StrafeFollowActor,
    NaiveReachLocation,
    NaiveNoNavMeshReachLocation,
    MAX,
};

