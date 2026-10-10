#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementControllerInterface.h"
#include "SprintComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API USprintComponent : public UActorComponent, public IMovementControllerInterface {
    GENERATED_BODY()
public:
    USprintComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

