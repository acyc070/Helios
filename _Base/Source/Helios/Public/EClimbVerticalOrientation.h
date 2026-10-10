#pragma once
#include "CoreMinimal.h"
#include "EClimbVerticalOrientation.generated.h"

UENUM()
enum class EClimbVerticalOrientation {
    Inside,
    Above,
    Below,
    AtEdge,
};

