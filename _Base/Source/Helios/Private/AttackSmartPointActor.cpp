#include "AttackSmartPointActor.h"

AAttackSmartPointActor::AAttackSmartPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAbortIfDisabled = false;
    this->mInvestigateAnimBlendInTime = 0.50f;
    this->mInvestigateAnimBlendOutTime = 0.50f;
}

FAttackAnimation AAttackSmartPointActor::GetActiveAnimation(float investigationTime) const {
    return FAttackAnimation{};
}


