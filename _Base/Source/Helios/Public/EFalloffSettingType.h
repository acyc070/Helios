#pragma once
#include "CoreMinimal.h"
#include "EFalloffSettingType.generated.h"

UENUM()
enum class EFalloffSettingType : uint8 {
    Walk,
    Sprint,
    Slide,
    Crouch,
    Combat,
    MAX,
};

