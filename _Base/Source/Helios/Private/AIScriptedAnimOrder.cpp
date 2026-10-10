#include "AIScriptedAnimOrder.h"

UAIScriptedAnimOrder::UAIScriptedAnimOrder() {
    this->Animation = NULL;
    this->Loop = false;
    this->MaxDuration = -1.00f;
    this->RootMotion = EMovementRestriction::NormalMovement;
}


