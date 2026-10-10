#pragma once
#include "CoreMinimal.h"
#include "EAttachmentType.generated.h"

UENUM()
enum class EAttachmentType {
    Attached,
    SoftAttached,
    Detached,
};

