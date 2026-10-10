#include "PlayerPawnController.h"
#include "AIAnimator.h"
#include "AILookinator.h"
#include "AINavigator.h"
#include "AIPatternBrain.h"
#include "HeliosPlayerInput.h"
#include "PathFindingComponent.h"

APlayerPawnController::APlayerPawnController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerInput = CreateDefaultSubobject<UHeliosPlayerInput>(TEXT("PlayerInput"));
    this->ClickEventKeys.AddDefaulted(1);
    this->mPathfinder = CreateDefaultSubobject<UPathFindingComponent>(TEXT("Pathfinder"));
    this->mNavigator = CreateDefaultSubobject<UAINavigator>(TEXT("Navigator"));
    this->mBodyAnimator = CreateDefaultSubobject<UAIAnimator>(TEXT("BodyAnimator"));
    this->mLookinator = CreateDefaultSubobject<UAILookinator>(TEXT("Lookinator"));
    this->mBrain = CreateDefaultSubobject<UAIPatternBrain>(TEXT("PatternBrain"));
    this->mShouldCameraIgnoreJumps = true;
    this->mShouldLookAtFeet = false;
    this->mPlayerPawn = NULL;
    this->mGrabAxisSensitivity = 0.50f;
    this->mKeyboardRotationSnap = 90.00f;
    this->mPlayPalType = EPawnType::Six;
}


