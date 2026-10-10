#pragma once
#include "CoreMinimal.h"
#include "OnMenuWidgetStartFadingInDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuWidgetStartFadingIn, UHeliosMenuWidget*, menuWidget);

