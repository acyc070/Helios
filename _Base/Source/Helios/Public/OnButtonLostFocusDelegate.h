#pragma once
#include "CoreMinimal.h"
#include "OnButtonLostFocusDelegate.generated.h"

class UHeliosButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonLostFocus, UHeliosButton*, lostFocusButton);

