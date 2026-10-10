#pragma once
#include "CoreMinimal.h"
#include "FiniteStateMachine.h"
#include "XboxOneControllerStateMachine.generated.h"

UCLASS(Blueprintable)
class UXboxOneControllerStateMachine : public UFiniteStateMachine {
    GENERATED_BODY()
public:
    UXboxOneControllerStateMachine();

};

