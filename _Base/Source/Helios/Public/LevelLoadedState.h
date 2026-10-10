#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelLoadedState.generated.h"

UCLASS(Blueprintable)
class ULevelLoadedState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelLoadedState();

};

