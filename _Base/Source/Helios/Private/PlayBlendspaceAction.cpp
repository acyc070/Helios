#include "PlayBlendspaceAction.h"

UPlayBlendspaceAction::UPlayBlendspaceAction() {
    this->mBlendspaceToPlay = NULL;
    this->mLoop = false;
    this->mMaxDuration = -1.00f;
    this->mRootMotion = EMovementRestriction::RootMotionWithPhysics;
}

void UPlayBlendspaceAction::OnBlendspaceDone(FName Name) {
}


