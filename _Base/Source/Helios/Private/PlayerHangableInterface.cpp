#include "PlayerHangableInterface.h"
#include "EAbilitySetGrab.h"

UPlayerHangableInterface::UPlayerHangableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabClimb;
    this->mJumpSettings.AddDefaulted(1);
    this->mInputCanOverrideAngleThreshold = 5.00f;
    this->mGrabbedHangable = NULL;
    this->mGrabbedGrabHelper = NULL;
    this->mLocomotionComponent = NULL;
    this->mCharacterIKControllerComponent = NULL;
    this->mJumpOffRegrabTimeout = 0.50f;
    this->mVerticalGrabOffset = 0.00f;
    this->mZAdjustment = -7.00f;
    this->mCanAutoGrab = false;
    this->mIgnoreHangingBlockCheck = true;
    this->IKHandOffset = 20.00f;
    this->mHandIKTranslationWeight = 100.00f;
    this->mHandIKRotationWeight = 100.00f;
    this->mGrabStartTimeStamp = 0.00f;
}

void UPlayerHangableInterface::OnLandedWhileReleasing(AControlledPawn* Pawn, const FFallData& landData) {
}

void UPlayerHangableInterface::OnJumpTransitionSucceeded() {
}

void UPlayerHangableInterface::OnJumpTransitionFailed() {
}

void UPlayerHangableInterface::OnGrabTransitionFinished() {
}

void UPlayerHangableInterface::OnGrabTransitionFailed() {
}

void UPlayerHangableInterface::NotifyHangFinished(const FFlowControlAnimNotifyData& AnimNotify) {
}


