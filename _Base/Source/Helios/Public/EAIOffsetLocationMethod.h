#pragma once
#include "CoreMinimal.h"
#include "EAIOffsetLocationMethod.generated.h"

UENUM()
enum class EAIOffsetLocationMethod : int32 {
    None,
    ForwardAxisOffset,
    VectorOffset,
    ComponentReference,
};

