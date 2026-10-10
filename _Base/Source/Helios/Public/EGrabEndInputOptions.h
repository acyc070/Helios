#pragma once
#include "CoreMinimal.h"
#include "EGrabEndInputOptions.generated.h"

UENUM()
enum class EGrabEndInputOptions : uint8 {
    OnReleaseOfGrabInput,
    OnCancelButton,
};

