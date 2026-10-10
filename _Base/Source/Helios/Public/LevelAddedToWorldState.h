#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelAddedToWorldState.generated.h"

UCLASS(Blueprintable)
class ULevelAddedToWorldState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelAddedToWorldState();

};

