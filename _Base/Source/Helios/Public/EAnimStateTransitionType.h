#pragma once
#include "CoreMinimal.h"
#include "EAnimStateTransitionType.generated.h"

UENUM()
enum class EAnimStateTransitionType : uint8 {
    None,
    Enter,
    Loop,
    Exit,
};

