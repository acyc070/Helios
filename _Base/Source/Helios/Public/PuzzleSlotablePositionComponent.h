#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PuzzleSlotablePositionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPuzzleSlotablePositionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPuzzleSlotablePositionComponent(const FObjectInitializer& ObjectInitializer);

};

