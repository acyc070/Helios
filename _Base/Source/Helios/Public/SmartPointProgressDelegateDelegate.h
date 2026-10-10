#pragma once
#include "CoreMinimal.h"
#include "SmartPointProgressEvent.h"
#include "SmartPointProgressDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSmartPointProgressDelegate, const FSmartPointProgressEvent&, smartPointEvent);

