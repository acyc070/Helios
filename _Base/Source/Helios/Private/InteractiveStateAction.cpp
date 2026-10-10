#include "InteractiveStateAction.h"

UInteractiveStateAction::UInteractiveStateAction() {
    this->mActivateP2PInteraction = NULL;
    this->mSpawnP2PInteraction = NULL;
    this->mStandbyLoopAnimation = NULL;
    this->mStandbyLoopBlendSpace = NULL;
    this->mMovementRestriction = EMovementRestriction::NormalMovement;
    this->mTowardsActor = NULL;
    this->mP2PInteraction = NULL;
    this->mStandByAnimationStateAction = NULL;
}


