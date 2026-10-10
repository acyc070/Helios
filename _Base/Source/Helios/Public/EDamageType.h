#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM()
enum class EDamageType : uint8 {
    Unspecified,
    Physical,
    Chemical,
    Sonic,
    MAX,
};

