#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "LevelAddedToWorldTransition.generated.h"

UCLASS(Blueprintable)
class ULevelAddedToWorldTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    ULevelAddedToWorldTransition();

};

