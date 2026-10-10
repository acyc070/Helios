#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "StreamingSystemWantsLevelUnloadedTransition.generated.h"

UCLASS(Blueprintable)
class UStreamingSystemWantsLevelUnloadedTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    UStreamingSystemWantsLevelUnloadedTransition();

};

