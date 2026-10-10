#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "StreamingSystemWantsLevelAddedToWorldTransition.generated.h"

UCLASS(Blueprintable)
class UStreamingSystemWantsLevelAddedToWorldTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    UStreamingSystemWantsLevelAddedToWorldTransition();

};

