#pragma once
#include "CoreMinimal.h"
#include "HeliosGameModeBase.h"
#include "InGameGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class HELIOS_API AInGameGameMode : public AHeliosGameModeBase {
    GENERATED_BODY()
public:
    AInGameGameMode(const FObjectInitializer& ObjectInitializer);

};

