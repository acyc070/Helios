#pragma once
#include "CoreMinimal.h"
#include "EAIAudioState.generated.h"

UENUM()
enum class EAIAudioState : uint8 {
    Idle,
    Alerted,
    Investigate,
    Hostile,
    MeleeAttack,
    KillingPawn,
    Damaged,
    Custom,
    Invalid,
    LostPlayer,
    Listen,
};

