#pragma once
#include "CoreMinimal.h"
#include "AnimationOverrideEvent.h"
#include "AnimationOverrideEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimationOverrideEventDelegate, const FAnimationOverrideEvent&, AnimationOverrideEvent);

