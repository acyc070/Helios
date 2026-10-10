#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "LevelLoadedTransition.generated.h"

UCLASS(Blueprintable)
class ULevelLoadedTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    ULevelLoadedTransition();

};

