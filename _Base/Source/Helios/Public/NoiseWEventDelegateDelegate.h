#pragma once
#include "CoreMinimal.h"
#include "NoiseEvent.h"
#include "NoiseWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNoiseWEventDelegate, const FNoiseEvent&, NoiseEvent, float, EventDistance);

