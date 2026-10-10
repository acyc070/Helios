#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "HeliosPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class HELIOS_API UHeliosPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UHeliosPlayerInput();

};

