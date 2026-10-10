#pragma once
#include "CoreMinimal.h"
#include "HeliosDamageEvent.h"
#include "DamageWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageWEventDelegate, const FHeliosDamageEvent&, DamageEvent, float, EventDistance);

