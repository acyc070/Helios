#pragma once
#include "CoreMinimal.h"
#include "EHeliosFormatParameter.generated.h"

UENUM()
enum class EHeliosFormatParameter : uint8 {
    ControlTexture,
    Control2DTexture,
    UIActionTexture,
    NamedTexture,
    KeyCodeTexture,
};

