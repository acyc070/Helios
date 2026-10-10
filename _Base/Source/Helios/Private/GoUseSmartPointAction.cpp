#include "GoUseSmartPointAction.h"

UGoUseSmartPointAction::UGoUseSmartPointAction() {
    this->mSmartPoint = NULL;
    this->mNavigationSelection = ESmartPointNavigationSelection::Default;
    this->mNavigationOptions = NULL;
    this->mLookAtPoint = false;
    this->mClearMovementOnTermination = true;
    this->mMovePattern = NULL;
    this->mUsePattern = NULL;
    this->mPreviousUsePattern = NULL;
    this->mLookAction = NULL;
}

void UGoUseSmartPointAction::OnPointToggled(USmartPoint* Point, bool Enabled) {
}


