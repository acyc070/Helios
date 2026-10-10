#pragma once
#include "CoreMinimal.h"
#include "OnMenuPushedInLayerDelegate.generated.h"

class UHeliosMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuPushedInLayer, UHeliosMenuWidget*, menuWidget);

