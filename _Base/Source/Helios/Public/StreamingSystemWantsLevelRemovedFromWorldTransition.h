#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "StreamingSystemWantsLevelRemovedFromWorldTransition.generated.h"

UCLASS(Blueprintable)
class UStreamingSystemWantsLevelRemovedFromWorldTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    UStreamingSystemWantsLevelRemovedFromWorldTransition();

};

