#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UnderTheBedAILocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UUnderTheBedAILocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UUnderTheBedAILocationComponent(const FObjectInitializer& ObjectInitializer);

};

