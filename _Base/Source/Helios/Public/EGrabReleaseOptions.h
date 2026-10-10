#pragma once
#include "CoreMinimal.h"
#include "EGrabReleaseOptions.generated.h"

UENUM()
enum class EGrabReleaseOptions : uint8 {
    AllowRegrab,
    NoRegrab,
    TimedRegrab,
};

