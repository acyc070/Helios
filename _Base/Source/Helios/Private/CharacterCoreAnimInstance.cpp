#include "CharacterCoreAnimInstance.h"
#include "Templates/SubclassOf.h"

UCharacterCoreAnimInstance::UCharacterCoreAnimInstance() {
    this->mFlowControlComponent = NULL;
    this->mOwnerPawn = NULL;
    this->mCurrentlyActiveGrabInterface = NULL;
    this->mUpdateWalkCycleRatio = false;
    this->mWalkCycleLeftMin = 0.12f;
    this->mWalkCycleLeftMax = 0.62f;
    this->mTimeRemainingAnim = 0.20f;
    this->mYawSignFlipHysterisisAngle = 30.00f;
    this->mCharacterIKComponent = NULL;
    this->mDefaultAnimationSet = NULL;
    this->mDefaultLookAtBlendspaceSet = NULL;
    this->mInvertBlendspaceAngleForQuickTurn = false;
    this->SlopeActiveAngle = 20.00f;
    this->mWalkUpSlopesAnimationSet = NULL;
    this->mWalkDownSlopesAnimationSet = NULL;
    this->mPressAgainstWallAnimationSet = NULL;
}

bool UCharacterCoreAnimInstance::ShouldExitWalkingState() const {
    return false;
}

void UCharacterCoreAnimInstance::RemoveRootmotion(const UObject* Invoker) {
}

void UCharacterCoreAnimInstance::OnWalkStartBegin(EWalkStartType Type) {
}

void UCharacterCoreAnimInstance::OnAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

bool UCharacterCoreAnimInstance::IsLocomotionSetEqual(const int32 locomotionCandidate) {
    return false;
}

bool UCharacterCoreAnimInstance::IsLocomotionSet(const EAnimLocomotionType locomotionType) const {
    return false;
}

bool UCharacterCoreAnimInstance::IsGrabInterfaceActive(TSubclassOf<UBaseGrabberInterface> grabClass) const {
    return false;
}

bool UCharacterCoreAnimInstance::IsBlendSpaceSlotDisabled(EBlendSpaceOverrideType overrideType) const {
    return false;
}

bool UCharacterCoreAnimInstance::IsAnimationSlotDisabled(EAnimOverrideType overrideType) const {
    return false;
}

bool UCharacterCoreAnimInstance::HasSequenceOverride(EAnimOverrideType overrideType, bool ignoreDefaultOverride) const {
    return false;
}

bool UCharacterCoreAnimInstance::HasRootmotionEnabled() {
    return false;
}

bool UCharacterCoreAnimInstance::HasBlendSpace(EBlendSpaceOverrideType blendspaceSlot, bool ignoreDefaultOverride) const {
    return false;
}

EWalkCycleFoot UCharacterCoreAnimInstance::GetWalkCycleFoot() const {
    return EWalkCycleFoot::None;
}

UFlowControlComponent* UCharacterCoreAnimInstance::GetFlowControlComponent() const {
    return NULL;
}

UAnimSequenceBase* UCharacterCoreAnimInstance::GetAnimWalkStopOverrideForType(EWalkStopOverrideType overrideType, float walkCycle) const {
    return NULL;
}

UAnimSequenceBase* UCharacterCoreAnimInstance::GetAnimSequenceOverrideForType(EAnimOverrideType overrideType) const {
    return NULL;
}

UAnimSequenceBase* UCharacterCoreAnimInstance::GetAnimSequenceOverrideForName(FName overrideType) const {
    return NULL;
}

UBlendSpaceBase* UCharacterCoreAnimInstance::GetAnimBlendSpaceForSlot(EBlendSpaceOverrideType overrideType) const {
    return NULL;
}

void UCharacterCoreAnimInstance::AddRootmotion(const UObject* Invoker) {
}


