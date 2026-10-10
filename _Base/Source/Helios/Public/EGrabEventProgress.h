#pragma once
#include "CoreMinimal.h"
#include "EGrabEventProgress.generated.h"

UENUM()
enum class EGrabEventProgress : uint8 {
    Unspecified,
    Started,
    Changed,
    Ended,
    Grabbed,
    MAX,
};

