#pragma once
#include "CoreMinimal.h"
#include "EObjectCharacteristics.generated.h"

UENUM()
enum class EObjectCharacteristics : uint8 {
    Player,
    Puzzlepal,
    Male,
    Female,
    MAX,
};

