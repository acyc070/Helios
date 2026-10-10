#pragma once
#include "CoreMinimal.h"
#include "ELookCalculation.generated.h"

UENUM()
enum class ELookCalculation : uint8 {
    BoneTransform,
    BoneHeightAtCharacter,
    CharacterWithApproximateHeight,
    None,
};

