#pragma once
#include "CoreMinimal.h"
#include "OnMenuWidgetFadedOutDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuWidgetFadedOut, UHeliosMenuWidget*, menuWidget);

