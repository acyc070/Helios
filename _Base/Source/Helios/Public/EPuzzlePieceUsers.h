#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceUsers.generated.h"

UENUM()
enum class EPuzzlePieceUsers : uint8 {
    Using_Any,
    Using_None,
    Using_Player,
    Using_Playpal,
    Using_Both,
};

