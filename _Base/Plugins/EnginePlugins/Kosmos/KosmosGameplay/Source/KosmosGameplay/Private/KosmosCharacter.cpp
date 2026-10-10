#include "KosmosCharacter.h"
#include "KosmosCharacterMovementComponent.h"

AKosmosCharacter::AKosmosCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UKosmosCharacterMovementComponent>(TEXT("CharMoveComp"))) {
}

UKosmosCharacterMovementComponent* AKosmosCharacter::GetKosmosMovementComponent() {
    return NULL;
}


