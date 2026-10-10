#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "StreamingSystemWantsLevelLoadedTransition.generated.h"

UCLASS(Blueprintable)
class UStreamingSystemWantsLevelLoadedTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    UStreamingSystemWantsLevelLoadedTransition();

};

