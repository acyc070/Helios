#pragma once
#include "CoreMinimal.h"
#include "OnMenuPushedDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuPushed, UHeliosMenuWidget*, menuWidget);

