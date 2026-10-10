#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ShotReachedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShotReached, FHitResult, currentHit, FHitResult, initialHit);

