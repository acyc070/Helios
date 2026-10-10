#include "AnimationSetupComponent.h"

UAnimationSetupComponent::UAnimationSetupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLocomotionMode = TEXT("Default");
}

void UAnimationSetupComponent::SetupAnimationStates_Blueprint(const TArray<FCharacterAnimStateSetup>& animStates, UAnimationSetupComponent*& setupComponent) {
}

void UAnimationSetupComponent::SetupAnimationState_Blueprint(FCharacterAnimStateSetup animStateSetup, UAnimationSetupComponent*& setupComponent) {
}

void UAnimationSetupComponent::SetDefaultLocomotion(FName LocomotionName) {
}


