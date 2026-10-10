#include "ClimbingInterface.h"
#include "EAbilitySetGrab.h"

UClimbingInterface::UClimbingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabClimb;
    this->mLocomotionComponent = NULL;
    this->mAnimationOverrideComponent = NULL;
    this->FallVelocitySearchMultiplier = 0.20f;
    this->TopWeightUpwardsFirst = 0.01f;
    this->TopWeightUpwardsSecond = 0.01f;
    this->TopWeightSidewaysFirst = 0.75f;
    this->TopWeightSidewaysSecond = 0.05f;
    this->JumpTurnDirectionThresholdAngle = 25.00f;
    this->JumpOffMaxRotationRate = 600.00f;
    this->HandPlacementIKPositionStrength = 100.00f;
    this->HandPlacementIKRotationStrength = 100.00f;
    this->TranslationInterpolationStrength = 5.00f;
    this->TranslationInterpolationStrengthZ = 20.00f;
    this->RotationInterpolationStrength = 8.50f;
    this->bCorrectTranslationError = true;
    this->bCorrectRotationYawError = true;
    this->bCorrectRotationPitchError = false;
    this->bCorrectRotationRollError = false;
    this->MaxHorizontalSearchOffset = 25.00f;
    this->bUseClimbTraversalBlockCheck = false;
    this->JumpFromTopTimeout = 0.50f;
    this->CurveName_IKFixUp = TEXT("IK_FixUp");
    this->mChosenClimbable = NULL;
    this->InitializationType = EClimbableInitType::None;
    this->ReleaseType = EClimbableReleaseType::None;
    this->ClimbDirection = EClimbDirection::Idle;
    this->IdlePose = EClimbIdlePose::None;
    this->InitialAngle = 0.00f;
    this->InitialCrouchAmount = 0.00f;
    this->GrabStartTimeStamp = 0.00f;
    this->mCharacterIKComponent = NULL;
    this->Mesh = NULL;
    this->bIsJumpingOff = false;
    this->bCanReturnToPreviousIdle = false;
    this->bWantReturnToPreviousIdle = false;
    this->bCanRegrab = true;
    this->bMotionBlocked = false;
    this->bJumpOffTurnRight = false;
    this->mInitialGrabHelpers[0] = NULL;
    this->mInitialGrabHelpers[1] = NULL;
    this->mInitialGrabHelpers[2] = NULL;
    this->mInitialGrabHelpers[3] = NULL;
    this->mUseJumpTarget = false;
    this->mIsInInitState = false;
}

void UClimbingInterface::PostProcessAnimNotifies(AActor* Actor) {
}

void UClimbingInterface::OnTransitionFinished() {
}

void UClimbingInterface::NotifyLimbPlaced(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyFindGrabLocation(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyExitInitState(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyEndJumpAnimation(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyEndExitingToTop(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyEndExitingToFalling(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyClimbingInDirection(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyBeginExitingToTop(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UClimbingInterface::NotifyBeginExitingToFalling(AActor* Actor, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}


