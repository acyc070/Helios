#pragma once
#include "CoreMinimal.h"
#include "OnMenuWidgetFadedInDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuWidgetFadedIn, UHeliosMenuWidget*, menuWidget);

