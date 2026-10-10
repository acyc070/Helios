#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HeliosGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class HELIOS_API AHeliosGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AHeliosGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void ToggleLowPerformanceMode();
    
};

