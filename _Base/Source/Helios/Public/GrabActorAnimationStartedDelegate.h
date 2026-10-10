#pragma once
#include "CoreMinimal.h"
#include "GrabActorAnimationStartedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabActorAnimationStarted, float, Timestamp);

