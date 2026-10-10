#pragma once
#include "CoreMinimal.h"
#include "EHeliosInputType.generated.h"

UENUM()
enum class EHeliosInputType : uint8 {
    KeyboardAndMouse,
    PS4Controller,
    PS5Controller,
    XSXController,
    StadiaController,
    XboxAdaptiveController,
    XboxOneLikeController,
    VitaRemote,
    SwitchJoyCons,
    SwitchProController,
    SwitchProControllerOnPC,
};

