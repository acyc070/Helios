#include "CharacterAnimationSlots.h"

UCharacterAnimationSlots::UCharacterAnimationSlots() {
}

UAnimSequenceBase* UCharacterAnimationSlots::GetWalkStop(EWalkStopOverrideType animationType, float walkCycle) const {
    return NULL;
}

UBlendSpaceBase* UCharacterAnimationSlots::GetBlendSpace(EBlendSpaceOverrideType animationType) const {
    return NULL;
}

UAnimSequenceBase* UCharacterAnimationSlots::GetAnimation(EAnimOverrideType animationType) const {
    return NULL;
}


