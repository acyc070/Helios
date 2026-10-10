#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelUnloadingState.generated.h"

UCLASS(Blueprintable)
class ULevelUnloadingState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelUnloadingState();

};

