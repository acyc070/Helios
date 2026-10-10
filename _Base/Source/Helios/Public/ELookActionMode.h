#pragma once
#include "CoreMinimal.h"
#include "ELookActionMode.generated.h"

UENUM()
enum class ELookActionMode : uint8 {
    LookAtActor,
    LookAtComponent,
    LookAtPoint,
    LookInDirection,
};

