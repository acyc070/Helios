#include "ReactAimPattern.h"
#include "EAIReactionAnimationState.h"

UReactAimPattern::UReactAimPattern() {
    this->mReactionAnim = EAIReactionAnimationState::Aim;
    this->mFirearm = NULL;
}


