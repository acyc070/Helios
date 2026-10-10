#include "MoveToLocationAction.h"

UMoveToLocationAction::UMoveToLocationAction() {
    this->mGoalRadius = -1.00f;
    this->mAllowedFailTime = 3.00f;
    this->mClearMovementOnTermination = true;
    this->mNavigationOptions = NULL;
    this->mUseNavNavigation = true;
}

void UMoveToLocationAction::OnMoveFailed(float failTime, int32 failCount) {
}

void UMoveToLocationAction::OnDestinationReached() {
}

void UMoveToLocationAction::AdjustDestinationAndDirection(const FVector& EndLocation, const FVector& endDirection) {
}

void UMoveToLocationAction::AdjustDestination(const FVector& EndLocation) {
}


