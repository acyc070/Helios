#include "ItemAction.h"

UItemAction::UItemAction() {
    this->mItemAction = EAIItemInteraction::Drop;
    this->mItem = NULL;
    this->mActionDuration = 2.00f;
}


