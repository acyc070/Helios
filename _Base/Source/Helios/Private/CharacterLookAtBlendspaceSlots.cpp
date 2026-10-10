#include "CharacterLookAtBlendspaceSlots.h"

UCharacterLookAtBlendspaceSlots::UCharacterLookAtBlendspaceSlots() {
    this->mLookAtBlendSpace[0] = NULL;
    this->mLookAtBlendSpace[1] = NULL;
    this->mLookAtBlendSpace[2] = NULL;
    this->mLookAtBlendSpace[3] = NULL;
    this->mLookAtBlendSpace[4] = NULL;
    this->mLookAtBlendSpace[5] = NULL;
}

UBlendSpaceBase* UCharacterLookAtBlendspaceSlots::GetBlendSpace(ELookAtBlendSpaceOverrideType animationType) const {
    return NULL;
}


