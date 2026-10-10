#pragma once
#include "CoreMinimal.h"
#include "HeliosDamageEvent.h"
#include "DamageEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageEventDelegate, const FHeliosDamageEvent&, DamageEvent);

