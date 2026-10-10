#include "FlowControlComponent.h"

UFlowControlComponent::UFlowControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mUseAbilitySet = true;
    this->mAbilitySetData = NULL;
    this->mTransitionAbilitySetOverride = NULL;
    this->mAnimationControlComponent = NULL;
    this->mTransitionManager = NULL;
    this->mLocomotionComponent = NULL;
    this->mAnimationListenerComponent = NULL;
}

void UFlowControlComponent::RemoveAbilitySetOverride(const FAbilitySetOverride& overrideData, UObject* callerObject) {
}

void UFlowControlComponent::ReleaseGrab() {
}

void UFlowControlComponent::QueueTransitionAndWait(FCharacterTransitionData transitionData, const FVector& TargetLocation, const FVector& targetDirection, FLatentActionInfo LatentInfo, const UAbilitySetOverrideData* AbilitySetOverride, ELatentTransitionResult& TransitionResult) {
}

void UFlowControlComponent::QueueTransition(FCharacterTransitionData transitionData, const FVector& TargetLocation, const FVector& targetDirection, const UAbilitySetOverrideData* AbilitySetOverride) {
}

void UFlowControlComponent::OnPostProcessAnimNotifies(AActor* notifier) {
}

void UFlowControlComponent::OnAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

bool UFlowControlComponent::IsSlideAbilityActive(EAbilitySetSlide ability) const {
    return false;
}

bool UFlowControlComponent::IsPickupAbilityActive(EAbilitySetPickup ability) const {
    return false;
}

bool UFlowControlComponent::IsOtherAbilityActive(EAbilitySetOther ability) const {
    return false;
}

bool UFlowControlComponent::IsLocomotionAbilityActive(EAbilitySetLocomotion ability) const {
    return false;
}

bool UFlowControlComponent::IsJumpAbilityActive(EAbilitySetJump ability) const {
    return false;
}

bool UFlowControlComponent::IsGrabAbilityActive(EAbilitySetGrab ability) const {
    return false;
}

bool UFlowControlComponent::IsCommunicationAbilityActive(EAbilitySetCommunication ability) const {
    return false;
}

void UFlowControlComponent::ApplyTimedAbilitySetOverride(const FAbilitySetOverride& overrideData, float overrideTime, UObject* callerObject) {
}

void UFlowControlComponent::ApplyAbilitySetOverride(const FAbilitySetOverride& overrideData, UObject* callerObject) {
}


