#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingState.h"
#include "LevelBeingRemovedFromWorldState.generated.h"

UCLASS(Blueprintable)
class ULevelBeingRemovedFromWorldState : public ULevelStreamingState {
    GENERATED_BODY()
public:
    ULevelBeingRemovedFromWorldState();

};

