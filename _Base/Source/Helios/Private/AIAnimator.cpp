#include "AIAnimator.h"

UAIAnimator::UAIAnimator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mSpeedMultiplier = 1.00f;
    this->mMaxHoldDuration = 0.20f;
    this->mBrain = NULL;
    this->mPawnSelf = NULL;
    this->mAnimControlComponent = NULL;
    this->mAnimOverrideComponent = NULL;
    this->mAnimSetupComponent = NULL;
    this->mFlowControl = NULL;
}

void UAIAnimator::StopCurrentCustomAnimation() {
}

void UAIAnimator::StopBlendspaceOverride() {
}

void UAIAnimator::StopAnimationState(FSoftEnumName animStateName) {
}

void UAIAnimator::StopAnimationOverrideState(bool skipExitAnimation) {
}

void UAIAnimator::StopAdditiveAnimation() {
}

void UAIAnimator::StopActionAnimation(FName ActionName) {
}

void UAIAnimator::SetRawMoveInput(const FVector& rawInputDir) {
}

void UAIAnimator::SetMoveSpeedRate(float rate0to1) {
}

void UAIAnimator::SetMoveInput(const FVector& Direction) {
}

void UAIAnimator::SetLocomotion(FName locomotionMode, bool Run) {
}

void UAIAnimator::SetFacingInput(const FVector& Direction, bool instantRotation) {
}

void UAIAnimator::SetAnimationStateDirection(FVector Direction) {
}

void UAIAnimator::SetAnimationStateBlendspaceInput(FRotator BlendspaceInput) {
}

void UAIAnimator::SetAnimationNotifyDelegate(FName NotifyName, const FAnimationControlDelegate& OnHit) {
}

void UAIAnimator::SetAlphaAdditiveAnimation(float Alpha) {
}

void UAIAnimator::PlayCustomBlendspace(FCustomBlendspaceOptions Options, const FAnimationControlDelegate& OnFinished) {
}

void UAIAnimator::PlayAnimOverrideState(UAnimSequenceBase* AnimationToPlay, UBlendSpaceBase* blendSpaceToPlay, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, EMovementRestriction movementRestriction, bool Looping, FCharacterAnimStateTransitions Transitions) {
}

void UAIAnimator::PlayAnimationState(FSoftEnumName animStateName, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted, FPlayAnimStateOptions playOptions) {
}

void UAIAnimator::PlayAdditiveAnimation(UAnimSequenceBase* AnimationToPlay, bool Loop, float Alpha) {
}

void UAIAnimator::PlayActionAnimation(FName ActionName, const FAnimationControlDelegate& OnFinished, const FAnimationControlDelegate& OnInterrupted) {
}

void UAIAnimator::OnAnimationNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}

bool UAIAnimator::IsCharacterRepulsionEnabled() const {
    return false;
}

float UAIAnimator::GetMoveSpeedRate() const {
    return 0.0f;
}

FVector UAIAnimator::GetMoveInput() const {
    return FVector{};
}

UFlowControlComponent* UAIAnimator::GetFlowControl() const {
    return NULL;
}

FVector UAIAnimator::GetFacingInput() const {
    return FVector{};
}

UChalkboardWrapper* UAIAnimator::GetAnimChalkboard() const {
    return NULL;
}

void UAIAnimator::EnableCharacterRepulsion(bool onOff) {
}

void UAIAnimator::ClearMoveInput() {
}

void UAIAnimator::ClearAnimationNotifyDelegate(FName NotifyName) {
}

void UAIAnimator::BlueprintStopAction(FChalkboardSectionKey Action) {
}

void UAIAnimator::BlueprintStartAction(FChalkboardSectionKey Action) {
}

void UAIAnimator::BlueprintPlayCustomAnimation(UAnimSequenceBase* AnimationToPlay, bool Loop) {
}

void UAIAnimator::BlueprintHoldAction(FChalkboardSectionKey Action) {
}


