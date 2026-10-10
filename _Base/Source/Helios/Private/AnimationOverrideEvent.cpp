#include "AnimationOverrideEvent.h"

FAnimationOverrideEvent::FAnimationOverrideEvent() {
    this->mAnimationOverrideEvent = EAnimationOverrideEvents::Unspecified;
    this->mSequenceOverrideType = EAnimOverrideType::None;
    this->mBlendspaceOverrideType = EBlendSpaceOverrideType::LocomotionInvalid;
    this->mAnimSequence = NULL;
    this->mBlendspace = NULL;
    this->mAnimID = 0;
    this->mLoopCount = 0;
}

