#pragma once
#include "CoreMinimal.h"
#include "OnButtonFocusedDelegate.generated.h"

class UHeliosButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonFocused, UHeliosButton*, focusedButton);

