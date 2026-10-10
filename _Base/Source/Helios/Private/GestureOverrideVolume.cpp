#include "GestureOverrideVolume.h"

AGestureOverrideVolume::AGestureOverrideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGestureTargetClass = NULL;
    this->mAnimationSlotToApply = NULL;
    this->mAbilitySetToApply = NULL;
}


