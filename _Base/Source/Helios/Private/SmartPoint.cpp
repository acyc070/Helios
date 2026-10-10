#include "SmartPoint.h"

USmartPoint::USmartPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mClassToRegister = USmartPoint::StaticClass();
    this->mPointType = ESmartPointType::Generic;
    this->mPointTypeFlags = 0;
    this->mNavigationOptions = NULL;
    this->mUseExactPosition = false;
    this->mUseExactDirection = true;
    this->mFollowAndRestart = false;
    this->mFollowAndRestartMinDistance = 100.00f;
    this->mTEMP_ArrivalBlendspace = NULL;
    this->mTEMP_DepartureBlendspace = NULL;
    this->mShowLinks = true;
    this->mStreamLevelWhileReserved = false;
    this->mIsRepeatable = true;
    this->mRepeatableDelay = 30.00f;
    this->mMaxLocationOffset = 0.00f;
    this->mGoalRadius = 20.00f;
    this->mLoopOrders = false;
    this->mReservedBy = NULL;
}

void USmartPoint::SkipToActionForReservingPawn(int32 actionIndex) {
}

void USmartPoint::SkipToAction(APawn* Pawn, int32 actionIndex) {
}

void USmartPoint::SkipCurrentAction(APawn* Pawn) {
}

void USmartPoint::ResetVisitsToIndex(APawn* visitor, int32 indexOrder) {
}

void USmartPoint::ResetVisits(APawn* visitor) {
}

void USmartPoint::Reserve(APawn* visitor) {
}

APawn* USmartPoint::ReservationPawn() const {
    return NULL;
}

bool USmartPoint::OrdersShouldLoop() const {
    return false;
}

bool USmartPoint::IsReserved() const {
    return false;
}

bool USmartPoint::IsRepeatable() const {
    return false;
}

bool USmartPoint::IsOfType(ESmartPointType spType) const {
    return false;
}

bool USmartPoint::HasCompletedVisit(APawn* visitor) const {
    return false;
}

float USmartPoint::GetTimeSinceVisited(APawn* visitor) const {
    return 0.0f;
}

USmartPoint* USmartPoint::GetNextPoint() const {
    return NULL;
}

FVector USmartPoint::GetMoveToLocation() const {
    return FVector{};
}

float USmartPoint::GetGoalRadius() const {
    return 0.0f;
}

void USmartPoint::CancelReservation(APawn* visitor) {
}

bool USmartPoint::CanBeVisitedBy(APawn* visitor) const {
    return false;
}


