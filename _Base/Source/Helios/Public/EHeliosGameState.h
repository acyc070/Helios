#pragma once
#include "CoreMinimal.h"
#include "EHeliosGameState.generated.h"

UENUM()
enum class EHeliosGameState : uint8 {
    AppStarting,
    Bootup,
    TitleScreen,
    Legals,
    MainMenu,
    PauseMenu,
    Playing,
};

