#include "PathFindingComponent.h"

UPathFindingComponent::UPathFindingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mNavFilterClass = NULL;
    this->mFollowProjectionHeight = 80.00f;
    this->bAutoRebuildInvalidPaths = true;
    this->bAllowPartialPath = false;
    this->AutoRebuildInvalidPathsInterval = 0.50f;
    this->AutoRebuildInvalidPathsDistance = 100.00f;
    this->AutoRebuildPathToActorDistance = 5.00f;
    this->goalRadius = 50.00f;
    this->OutOfBoundsThreshold = 300.00f;
    this->mNavData = NULL;
    this->mSceneComponentToMoveTo = NULL;
}

FVector UPathFindingComponent::TryGetRandomReachableLocationInRadius(bool& success, FVector Center, float Radius) {
    return FVector{};
}

bool UPathFindingComponent::ProjectToNavMesh(const FVector& Location, FVector& OutProjectedLocation, const FVector& BoundsCheck) {
    return false;
}

void UPathFindingComponent::OnNavigationDataUnregistered(ANavigationData* NavData) {
}

void UPathFindingComponent::OnNavigationDataRegistered(ANavigationData* NavData) {
}

bool UPathFindingComponent::NeedsRepath() const {
    return false;
}

bool UPathFindingComponent::NavmeshRaycast(const FVector& RayStart, const FVector& RayEnd, FVector& OutHitLocation) {
    return false;
}

bool UPathFindingComponent::MoveToRandomLocationInRadius(float Radius, float NewGoalRadius) {
    return false;
}

bool UPathFindingComponent::MoveToLocation(const FVector& Goal, float NewGoalRadius) {
    return false;
}

bool UPathFindingComponent::MoveToComponent(const USceneComponent* ComponentGoal, float NewGoalRadius) {
    return false;
}

bool UPathFindingComponent::MoveToActor(const AActor* ActorGoal, bool bObserveActor, float NewGoalRadius) {
    return false;
}

bool UPathFindingComponent::IsAtGoal() const {
    return false;
}

bool UPathFindingComponent::HasPath() const {
    return false;
}

bool UPathFindingComponent::GetNearestPointOnPath(const FVector& fromLocation, FVector& outFromLocationProjection, FVector& outNearest, int32& outNearestSegmentIndex, int32 fromPointIndex) const {
    return false;
}

FVector UPathFindingComponent::GetGoalLocation() const {
    return FVector{};
}

FVector UPathFindingComponent::GetFarthestNavPolyVertex(bool& success, FVector searchDirection, float searchConeAngle, float navPolySearchRadius) {
    return FVector{};
}

bool UPathFindingComponent::GenerateAndStorePath(const FVector& From, const FVector& To) {
    return false;
}

void UPathFindingComponent::CompletePath() {
}

void UPathFindingComponent::AdvancePointOnPath(const FVector& initialPoint, float byDistance, FVector& outAdvancedPoint, int32 fromPointIndex) const {
}

void UPathFindingComponent::AbortPath() {
}


