#pragma once
#include "CoreMinimal.h"
#include "OnListButtonValueChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListButtonValueChanged, int32, Value);

