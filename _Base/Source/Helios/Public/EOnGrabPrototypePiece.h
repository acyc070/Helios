#pragma once
#include "CoreMinimal.h"
#include "EOnGrabPrototypePiece.generated.h"

UENUM()
enum class EOnGrabPrototypePiece : uint8 {
    Switch_Hold,
    Switch_OnOff,
    Ramping_Up,
};

