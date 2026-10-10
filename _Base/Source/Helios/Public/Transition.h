#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Transition.generated.h"

UCLASS(Abstract, Blueprintable)
class UTransition : public UObject {
    GENERATED_BODY()
public:
    UTransition();

};

