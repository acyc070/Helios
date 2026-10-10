#include "AnimationControlComponent.h"

UAnimationControlComponent::UAnimationControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mUseLegacyStateEvents = true;
    this->mContextReevaluationInterval = 0.10f;
    this->mControlledPawn = NULL;
    this->mAnimSetupComponent = NULL;
    this->mAnimOverrideComponent = NULL;
    this->mAnimListener = NULL;
    this->mFlowControl = NULL;
    this->mCharacterAnimInstance = NULL;
    this->mLocomotionComponent = NULL;
    this->mSmartContextChalkboard = NULL;
    this->mInvalidSetup = false;
    this->mMovementRestrictionMode = EMovementRestriction::NormalMovement;
    this->mCurrentAnimStateAsset = NULL;
    this->mCurrentAnimStateTransition = EAnimStateTransitionType::None;
}

void UAnimationControlComponent::UnsetLocomotion(FName Name, bool Run) {
}

void UAnimationControlComponent::StopAnimationState(FSoftEnumName Name, bool skipExitAnimation) {
}

void UAnimationControlComponent::StopAnimationOverrideState(bool skipExitAnimation) {
}

void UAnimationControlComponent::StopActionAnimation(FName Name) {
}

void UAnimationControlComponent::SetLocomotion(FName Name, bool Run) {
}

void UAnimationControlComponent::SetBlendSpaceInputForState(FName StateName, const FVector2D& Input) {
}

void UAnimationControlComponent::SetBlendSpaceForState(FName StateName, UBlendSpaceBase* BlendSpace) {
}

void UAnimationControlComponent::SetAnimationStateDirection(const FVector& Direction) {
}

void UAnimationControlComponent::SetAnimationStateBlendspaceInput(const FRotator& BlendspaceInput) {
}

void UAnimationControlComponent::SetAnimationForState(FName StateName, UAnimSequenceBase* Animation) {
}

void UAnimationControlComponent::PlayBlendSpaceOverrideState(UBlendSpaceBase* blendSpaceToPlay, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, EMovementRestriction movementRestriction, bool Looping, FCharacterAnimStateTransitions Transitions) {
}

void UAnimationControlComponent::PlayAnimationStateAndWait(float& DeltaTime, FSoftEnumName StateName, TSoftObjectPtr<UAbilitySetOverrideData> AbilitySetOverride, FLatentActionInfo LatentInfo, ELatentPlayAnimationResult& animResult) {
}

void UAnimationControlComponent::PlayAnimationState(FSoftEnumName Name, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, FPlayAnimStateOptions playOptions) {
}

void UAnimationControlComponent::PlayAnimationOverrideState(UAnimSequenceBase* AnimationToPlay, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, EMovementRestriction movementRestriction, bool Looping, FCharacterAnimStateTransitions Transitions) {
}

void UAnimationControlComponent::PlayAnimationAndWait(float& DeltaTime, UAnimationAsset* Animation, FCharacterAnimStateTransitions Transitions, TSoftObjectPtr<UAbilitySetOverrideData> AbilitySetOverride, EAnimationLayering Layering, bool Additive, bool Loop, EMovementRestriction RootMotionMode, FLatentActionInfo LatentInfo, ELatentPlayAnimationResult& animResult) {
}

void UAnimationControlComponent::PlayActionAnimation(FName Name, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted) {
}

void UAnimationControlComponent::OnAnimationStateStarted(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UAnimationControlComponent::OnAnimationStateFinished(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

bool UAnimationControlComponent::IsPlayingOverrideAnimation() const {
    return false;
}

bool UAnimationControlComponent::IsPlayingAnimationState(const FSoftEnumName& Name) {
    return false;
}

void UAnimationControlComponent::CopyLocomotionToDefault(FName Name) {
}


