#include "WeaponComponentCode.h"

UWeaponComponentCode::UWeaponComponentCode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mDamageSource = EDamageSourceType::MeleeHit;
    this->mDamageType = EDamageType::Physical;
    this->mDamage = 1.00f;
    this->mIsBreakable = false;
    this->mAttackHitFreezeTime = 0.00f;
    this->mSwingAbilitySet = NULL;
    this->mCollisionProfile = TEXT("WeaponLayer");
    this->mDebugCollision = false;
    this->mGlancingHitAngle = 50.00f;
    this->mBlockTraceDistance = 30.00f;
    this->mTraceBoxWeaponScale = 0.40f;
    this->mBlockTraceEndOffset = 80.00f;
    this->mBlockTraceStartOffset = 100.00f;
    this->mKnockdownImpulseStrength = 6000.00f;
    this->mDebugPhysicality = false;
    this->mEnablePhysicality = true;
    this->mLerpStrength = 5.00f;
    this->mStandTurningLerpStrength = 0.40f;
    this->mLerpTime = 0.30f;
    this->mRotationOffset = 40.00f;
    this->mWeaponEndZOffset = 7.00f;
    this->mBouncingHitAngleLimit = 45.00f;
    this->mEnemyCurrentlyAttacking = NULL;
    this->mHitBoxComponent = NULL;
    this->mWeaponEndComponent = NULL;
    this->mWeaponEndPollComponent = NULL;
    this->mWeaponEndBladeComponent = NULL;
    this->mWeaponMesh = NULL;
    this->mHasBladeUp = false;
}

void UWeaponComponentCode::SetHasBladeUp(const bool hasBladeUp) {
}

void UWeaponComponentCode::OnWeaponAnimNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UWeaponComponentCode::NotifyAttackFinished() {
}

bool UWeaponComponentCode::GetIsBreakable() {
    return false;
}

void UWeaponComponentCode::CheckCollision(UPrimitiveComponent* HitComponent, AActor* hitActor, const FHitResult& HitResult) {
}

void UWeaponComponentCode::BreakWeapon(AActor* breaker) {
}


