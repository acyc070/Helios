#include "AnimationOverrideComponent.h"

UAnimationOverrideComponent::UAnimationOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mReplaceOldOverride = false;
    this->mCharacterAnimInstance = NULL;
    this->mFlowControlComponent = NULL;
    this->mAnimationControlComponent = NULL;
}

void UAnimationOverrideComponent::StopComplexOverrideLoop() {
}

void UAnimationOverrideComponent::StopAnimationSequenceOverride(bool skipExitAnimation) {
}

void UAnimationOverrideComponent::SetOverrideAnimation(EAnimationOverrideType overrideType, float enterBlendTime, float exitBlendtime) {
}

void UAnimationOverrideComponent::SetBlendspaceXY(float X, float Y) {
}

void UAnimationOverrideComponent::PlayAnimationSequenceOverride2(UAnimSequenceBase* AnimationToPlay, EMovementRestriction movementRestriction, bool Looping, int32 Options, float BlendInTime, float BlendOutTime) {
}

void UAnimationOverrideComponent::NotifyAnimationOverrideFinished(const FFlowControlAnimNotifyData& AnimNotify) {
}

FAnimationOverrideHandle UAnimationOverrideComponent::AddOverrideAnimationSlots(const UCharacterAnimationSlots* overrideInfo, EAnimationOverridePriority Priority) {
    return FAnimationOverrideHandle{};
}


