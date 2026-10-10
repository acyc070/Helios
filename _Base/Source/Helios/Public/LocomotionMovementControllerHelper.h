#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MovementControllerInterface.h"
#include "LocomotionMovementControllerHelper.generated.h"

class UFlowControlComponent;

UCLASS(Blueprintable)
class ULocomotionMovementControllerHelper : public UObject, public IMovementControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
public:
    ULocomotionMovementControllerHelper();


    // Fix for true pure virtual functions not being implemented
};

