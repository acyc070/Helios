#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "KosmosCharacter.generated.h"

class UKosmosCharacterMovementComponent;

UCLASS(Blueprintable)
class KOSMOSGAMEPLAY_API AKosmosCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AKosmosCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    UKosmosCharacterMovementComponent* GetKosmosMovementComponent();
    
};

