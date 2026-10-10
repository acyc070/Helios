#pragma once
#include "CoreMinimal.h"
#include "EClimbEnterTypes.generated.h"

UENUM()
enum class EClimbEnterTypes {
    ClimbUpFromGround,
    FromAir,
    ClimbDownOnObject,
};

