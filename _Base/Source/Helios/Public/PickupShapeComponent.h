#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PickupShapeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPickupShapeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPickupShapeComponent(const FObjectInitializer& ObjectInitializer);

};

