#include "PuzzleMovableActor.h"
#include "Components/SceneComponent.h"
#include "SplineMovablePPComponent.h"
#include "StaticMovablePPComponent.h"

APuzzleMovableActor::APuzzleMovableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->mSplineEditMode = false;
    this->mDefaultInitialPoint = 0;
    this->mDefaultInitialPointProgress = 0.00f;
    this->bFollowSpline = true;
    this->bStraightLineInterpolation = false;
    this->bUseCustomCurveForProgress = false;
    this->mDrawPlayerForceDebugLines = false;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->MovementPath = CreateDefaultSubobject<USplineMovablePPComponent>(TEXT("MovementPath"));
    this->NonMovingComponent = CreateDefaultSubobject<UStaticMovablePPComponent>(TEXT("NotMovingComponent"));
    this->mCustomProgressCurveFloat = NULL;
    this->MovementPath->SetupAttachment(RootComponent);
    this->NonMovingComponent->SetupAttachment(RootComponent);
}

void APuzzleMovableActor::InterpolateToSplinePositionOverTime(bool startFromCurrent, int32 fromPoint, float fromSegmentPosition, int32 toPoint, float toSegmentPosition, float Seconds, bool scaleTimeToPartialRange) {
}

FTransform APuzzleMovableActor::GetTransformInSplineAtStateProgress(int32 State, float stateProgress) {
    return FTransform{};
}

FTransform APuzzleMovableActor::GetTransformInSplineAtProgress(float Progress) {
    return FTransform{};
}


