#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MovementControllerInterface.h"
#include "MovementLogicOverrideInterface.h"
#include "CharacterTransitionController.generated.h"

class UFlowControlComponent;

UCLASS(Blueprintable)
class UCharacterTransitionController : public UObject, public IMovementControllerInterface, public IMovementLogicOverrideInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
public:
    UCharacterTransitionController();


    // Fix for true pure virtual functions not being implemented
};

