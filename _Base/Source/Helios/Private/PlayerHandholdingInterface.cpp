#include "PlayerHandholdingInterface.h"
#include "EAbilitySetGrab.h"

UPlayerHandholdingInterface::UPlayerHandholdingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabHandholding;
    this->MaxIKDistance = 150.00f;
    this->MaxInteractDistance = 90.00f;
    this->HardPullDistanceStart = 50.00f;
    this->HardPullDistanceEnd = 40.00f;
    this->FollowDistance = 120.00f;
    this->FollowDistanceForwardOffset = 30.00f;
    this->FollowTargetDistance = 23.00f;
    this->FollowTargetArrivalDistance = 10.00f;
    this->SwitchHandHysterisisMin = 100.00f;
    this->SwitchHandHysterisisMax = 150.00f;
    this->AvoidanceDistance = 40.00f;
    this->WalkStartDelay = 0.20f;
    this->EndHandholdingDistance = 200.00f;
    this->Driver_RotationRate = 720.00f;
    this->mMinimumHandDistance = 20.00f;
    this->mMaximumHandDistance = 30.00f;
    this->mHipOffsetWhenFar = 5.00f;
    this->mHipOffsetWhenClose = -10.00f;
    this->OtherHeldComponent = NULL;
    this->bIsDriver = false;
    this->HandToUse = EHandHoldingSide::LEFT;
    this->HandToGrab = EHandHoldingSide::RIGHT;
    this->OwningPlayer = NULL;
    this->mAnimOverrideComponent = NULL;
    this->mAnimControlComponent = NULL;
    this->mPassengerMovementState = EPassengerMovementState::None;
    this->mPassengerRotationSpeed = 0.00f;
    this->bIsBeingPulled = false;
}

void UPlayerHandholdingInterface::StopHoldingHands() {
}

bool UPlayerHandholdingInterface::StartHoldingHands(UPlayerHandholdingInterface* partner, bool NewIsDriver) {
    return false;
}

bool UPlayerHandholdingInterface::IsHoldingHands() const {
    return false;
}

bool UPlayerHandholdingInterface::IsDriver() const {
    return false;
}

bool UPlayerHandholdingInterface::IsBeingPulled() const {
    return false;
}

float UPlayerHandholdingInterface::GetSoftPullForce() const {
    return 0.0f;
}

UPlayerHandholdingInterface* UPlayerHandholdingInterface::GetHeldPartner() const {
    return NULL;
}

float UPlayerHandholdingInterface::GetHardPullForce() const {
    return 0.0f;
}

FTransform UPlayerHandholdingInterface::GetHandTarget() const {
    return FTransform{};
}


