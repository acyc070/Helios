#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelLoadingState.generated.h"

UCLASS(Blueprintable)
class ULevelLoadingState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelLoadingState();

};

