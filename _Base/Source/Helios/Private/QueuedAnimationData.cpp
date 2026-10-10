#include "QueuedAnimationData.h"

FQueuedAnimationData::FQueuedAnimationData() {
    this->mTransitionType = EAnimStateTransitionType::None;
    this->mAnimationAsset = NULL;
    this->mMovementRestrictionMode = EMovementRestriction::NormalMovement;
}

