#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEditableWidgetType.h"
#include "EditingWidgetUsedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEditingWidgetUsed, FTransform, Delta, EEditableWidgetType, WidgetType);

