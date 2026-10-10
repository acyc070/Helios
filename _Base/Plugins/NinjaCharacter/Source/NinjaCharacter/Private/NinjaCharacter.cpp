#include "NinjaCharacter.h"
#include "NinjaCharacterMovementComponent.h"

ANinjaCharacter::ANinjaCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UNinjaCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bCapsuleRotatesControlRotation = false;
}

void ANinjaCharacter::LaunchCharacterRotated(FVector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride) {
}




