#pragma once
#include "CoreMinimal.h"
#include "ECharacterAudioEventType.generated.h"

UENUM()
enum class ECharacterAudioEventType : uint8 {
    None,
    Idle,
    Alerted,
    Investigate,
    Hostile,
    Chase,
    Lost_Player,
    Attack,
    Damage,
    Listen,
    Killing_Player,
    Custom,
};

