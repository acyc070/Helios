#pragma once
#include "CoreMinimal.h"
#include "EDoorInteractors.generated.h"

UENUM()
enum class EDoorInteractors {
    DoorInteractsWithPlayer,
    DoorInteractsWithPlaypal,
    DoorInteractsWithOthers,
};

