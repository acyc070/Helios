#pragma once
#include "CoreMinimal.h"
#include "EAIInteraction.generated.h"

UENUM()
enum class EAIInteraction {
    Unset,
    UseHangable,
    UseLever,
    UseCrank,
    UseButton,
    PushObject,
    CarryObject,
};

