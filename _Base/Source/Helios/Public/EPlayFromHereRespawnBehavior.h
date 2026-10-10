#pragma once
#include "CoreMinimal.h"
#include "EPlayFromHereRespawnBehavior.generated.h"

UENUM()
enum class EPlayFromHereRespawnBehavior : uint8 {
    RespawnAsNormalGameOnDeath,
    RespawnAtPlayFromHereOnDeath,
};

