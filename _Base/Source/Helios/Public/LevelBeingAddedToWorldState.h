#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelBeingAddedToWorldState.generated.h"

UCLASS(Blueprintable)
class ULevelBeingAddedToWorldState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelBeingAddedToWorldState();

};

