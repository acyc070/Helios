#pragma once
#include "CoreMinimal.h"
#include "EItemTags.generated.h"

UENUM()
enum class EItemTags : uint8 {
    Play,
    Cute,
    Puzzle,
    Dangerous,
    Weapon,
    Throwable,
    Examinable,
    Kickable,
    Shovable,
    Carryable,
    MAX,
};

