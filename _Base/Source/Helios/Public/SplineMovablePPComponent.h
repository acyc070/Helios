#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SplineMovablePPComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API USplineMovablePPComponent : public USplineComponent {
    GENERATED_BODY()
public:
    USplineMovablePPComponent(const FObjectInitializer& ObjectInitializer);

};

