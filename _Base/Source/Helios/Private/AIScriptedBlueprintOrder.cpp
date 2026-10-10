#include "AIScriptedBlueprintOrder.h"

UAIScriptedBlueprintOrder::UAIScriptedBlueprintOrder() {
    this->mAIChalkboard = NULL;
    this->mAnimator = NULL;
    this->mNavigator = NULL;
    this->mPawn = NULL;
    this->mLookinator = NULL;
    this->mBrain = NULL;
}

void UAIScriptedBlueprintOrder::TerminateOrder(bool successful) {
}



