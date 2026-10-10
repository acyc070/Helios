#include "AIScriptedInteractiveStateOrder.h"

UAIScriptedInteractiveStateOrder::UAIScriptedInteractiveStateOrder() {
    this->InteractionIsParent = false;
    this->InteractionToEnable = NULL;
    this->InteractionToSpawn = NULL;
    this->InteractiveStateAnim = NULL;
    this->InteractiveStateBlendSpace = NULL;
    this->movementRestriction = EMovementRestriction::NormalMovement;
    this->TowardsPawn = EPawnType::Boy;
}


