#include "AIScriptedLookOrder.h"

UAIScriptedLookOrder::UAIScriptedLookOrder() {
    this->mLookAtActor = NULL;
    this->mLookAtComponent = NULL;
    this->mDuration = 2.00f;
    this->mTurnTowardsLookAt = false;
}


