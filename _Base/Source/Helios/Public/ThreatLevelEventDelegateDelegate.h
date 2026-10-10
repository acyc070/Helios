#pragma once
#include "CoreMinimal.h"
#include "ThreatData.h"
#include "ThreatLevelEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FThreatLevelEventDelegate, FThreatData, ThreatData);

