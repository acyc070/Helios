#pragma once
#include "CoreMinimal.h"
#include "EActivityState.generated.h"

UENUM()
enum class EActivityState {
    Start,
    Stop,
    Resume,
};

