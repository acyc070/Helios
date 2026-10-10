#pragma once
#include "CoreMinimal.h"
#include "EPawnType.generated.h"

UENUM()
enum class EPawnType : uint8 {
    Unspecified,
    Boy,
    Six,
    Kid,
    Hunter,
    Teacher,
    Bully,
    Doctor,
    TVPeep,
    Patient,
    PatientHand,
    Thinman,
    MonsterSix,
    Moth = 70,
    PrototypeCharacter1 = 100,
    PrototypeCharacter2,
    PrototypeCharacter3,
    EscapedGirl = 13,
    MAX,
};

