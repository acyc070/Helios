#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TarSelectionVisibilityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TARSIERUTILITIES_API UTarSelectionVisibilityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTarSelectionVisibilityComponent(const FObjectInitializer& ObjectInitializer);

};

