#pragma once
#include "CoreMinimal.h"
#include "SmartPointToggledDelegate.generated.h"

class USmartPoint;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSmartPointToggled, USmartPoint*, Point, bool, Enabled);

