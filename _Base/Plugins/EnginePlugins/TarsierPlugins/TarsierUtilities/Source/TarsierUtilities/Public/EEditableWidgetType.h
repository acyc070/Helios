#pragma once
#include "CoreMinimal.h"
#include "EEditableWidgetType.generated.h"

UENUM()
enum class EEditableWidgetType : uint8 {
    None,
    MinExtent,
    MaxExtent,
    Transform,
};

