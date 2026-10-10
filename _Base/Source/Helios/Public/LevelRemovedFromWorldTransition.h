#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "LevelRemovedFromWorldTransition.generated.h"

UCLASS(Blueprintable)
class ULevelRemovedFromWorldTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    ULevelRemovedFromWorldTransition();

};

