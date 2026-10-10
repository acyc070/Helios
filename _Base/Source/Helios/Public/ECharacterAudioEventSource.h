#pragma once
#include "CoreMinimal.h"
#include "ECharacterAudioEventSource.generated.h"

UENUM()
enum class ECharacterAudioEventSource : uint8 {
    Instant_Trigger,
    Start_Pattern,
    Stop_Pattern,
    Start_Action,
    Stop_Action,
};

