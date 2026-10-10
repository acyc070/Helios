#pragma once
#include "CoreMinimal.h"
#include "ECamerActorBlendState.generated.h"

UENUM()
enum class ECamerActorBlendState {
    Inactive,
    Active,
    BlendingOut,
};

