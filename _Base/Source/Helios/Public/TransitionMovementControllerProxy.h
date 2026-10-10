#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MovementControllerInterface.h"
#include "TransitionMovementControllerProxy.generated.h"

UCLASS(Blueprintable)
class UTransitionMovementControllerProxy : public UObject, public IMovementControllerInterface {
    GENERATED_BODY()
public:
    UTransitionMovementControllerProxy();


    // Fix for true pure virtual functions not being implemented
};

