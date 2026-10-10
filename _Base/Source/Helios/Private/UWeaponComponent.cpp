#include "UWeaponComponent.h"

UDEPRECATED_UWeaponComponent::UDEPRECATED_UWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mDamageSource = EDamageSourceType::MeleeHit;
    this->mDamageType = EDamageType::Physical;
    this->mDamage = 1.00f;
    this->mIsBreakable = false;
    this->mSwingAbilitySet = NULL;
    this->mCollisionProfile = TEXT("WeaponLayer");
    this->mDebugCollision = false;
    this->mEnemyCurrentlyAttacking = NULL;
    this->mHitBoxComponent = NULL;
}

void UDEPRECATED_UWeaponComponent::OnWeaponAnimNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UDEPRECATED_UWeaponComponent::OnOverlap(UPrimitiveComponent* HitComponent, AActor* hitActor, const FHitResult& HitResult) {
}

void UDEPRECATED_UWeaponComponent::NotifyAttackFinished() {
}

bool UDEPRECATED_UWeaponComponent::GetIsBreakable() {
    return false;
}

void UDEPRECATED_UWeaponComponent::BreakWeapon(AActor* breaker) {
}


