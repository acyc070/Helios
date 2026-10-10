#pragma once
#include "CoreMinimal.h"
#include "ENavModifierShapeType.generated.h"

UENUM()
enum class ENavModifierShapeType {
    Sphere,
    Capsule,
    Box,
    Cone,
    MAX,
};

