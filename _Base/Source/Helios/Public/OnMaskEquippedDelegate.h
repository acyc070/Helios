#pragma once
#include "CoreMinimal.h"
#include "MaskData.h"
#include "OnMaskEquippedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaskEquipped, FMaskData, MaskData);

