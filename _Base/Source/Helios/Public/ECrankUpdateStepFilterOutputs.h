#pragma once
#include "CoreMinimal.h"
#include "ECrankUpdateStepFilterOutputs.generated.h"

UENUM()
enum class ECrankUpdateStepFilterOutputs : uint8 {
    InStep,
    StepNotReached,
};

