#pragma once
#include "CoreMinimal.h"
#include "OnMenuPoppedDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuPopped, UHeliosMenuWidget*, menuWidget);

