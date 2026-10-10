#pragma once
#include "CoreMinimal.h"
#include "WeaponAttackStartEvent.h"
#include "WeaponAttackDangerWEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponAttackDangerWEventDelegate, const FWeaponAttackStartEvent&, DangerEvent, float, EventDistance);

