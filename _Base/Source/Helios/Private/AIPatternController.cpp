#include "AIPatternController.h"
#include "AIAnimator.h"
#include "AILookinator.h"
#include "AINavigator.h"
#include "AIPatternBrain.h"
#include "PathFindingComponent.h"

AAIPatternController::AAIPatternController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mBrain = CreateDefaultSubobject<UAIPatternBrain>(TEXT("PatternBrain"));
    this->mPathfinder = CreateDefaultSubobject<UPathFindingComponent>(TEXT("Pathfinder"));
    this->mNavigator = CreateDefaultSubobject<UAINavigator>(TEXT("Navigator"));
    this->mBodyAnimator = CreateDefaultSubobject<UAIAnimator>(TEXT("BodyAnimator"));
    this->mLookinator = CreateDefaultSubobject<UAILookinator>(TEXT("Lookinator"));
}


