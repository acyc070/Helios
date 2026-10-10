#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AtlasLeechCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAtlasLeechCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UAtlasLeechCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

