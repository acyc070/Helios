#pragma once
#include "CoreMinimal.h"
#include "OnMenuWidgetFocusChangedDelegate.generated.h"

class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuWidgetFocusChanged, UWidget*, focusWidget);

