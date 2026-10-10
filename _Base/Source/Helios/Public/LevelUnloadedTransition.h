#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingTransition.h"
#include "LevelUnloadedTransition.generated.h"

UCLASS(Blueprintable)
class ULevelUnloadedTransition : public ULevelStreamingTransition {
    GENERATED_BODY()
public:
    ULevelUnloadedTransition();

};

