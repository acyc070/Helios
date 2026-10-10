#include "DeathHandlerDataAsset.h"

UDeathHandlerDataAsset::UDeathHandlerDataAsset() {
    this->mScript = NULL;
    this->mAnimationOverrideFlags = 0;
    this->mMovementRestriction = EMovementRestriction::NormalMovement;
    this->mBlendInTime = 0.10f;
    this->mDeathAbilitySetOverride = NULL;
    this->mAudioEvent = NULL;
    this->mTriggerDeathFade = true;
    this->mRespawnAfterTimeout = true;
    this->mTimeBeforeRespawn = 0.00f;
    this->mAutoRagdollOnConfirmKill = true;
    this->RemoveCollisionOnRagdoll = false;
    this->mChangeCollisionSettingsOnConfirmKill = false;
    this->mCollisionType = ECollisionEnabled::NoCollision;
    this->mAllChannelsCollisionResponse = ECR_Ignore;
}


