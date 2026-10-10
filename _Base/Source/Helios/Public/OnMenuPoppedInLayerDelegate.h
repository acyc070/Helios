#pragma once
#include "CoreMinimal.h"
#include "OnMenuPoppedInLayerDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuPoppedInLayer, UHeliosMenuWidget*, menuWidget);

