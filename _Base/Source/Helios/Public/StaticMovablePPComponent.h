#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "StaticMovablePPComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UStaticMovablePPComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UStaticMovablePPComponent(const FObjectInitializer& ObjectInitializer);

};

