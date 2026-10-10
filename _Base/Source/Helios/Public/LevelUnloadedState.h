#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelUnloadedState.generated.h"

UCLASS(Blueprintable)
class ULevelUnloadedState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelUnloadedState();

};

