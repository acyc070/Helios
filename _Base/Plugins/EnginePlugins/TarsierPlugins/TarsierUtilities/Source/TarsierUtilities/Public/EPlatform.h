#pragma once
#include "CoreMinimal.h"
#include "EPlatform.generated.h"

UENUM()
enum class EPlatform : uint8 {
    PC,
    PS4,
    XboxOne,
    Android,
    IOS,
    HTML5,
    Switch,
    PS5,
    XSX,
    STADIA,
    WinGDK,
    XboxOneGDK,
};

