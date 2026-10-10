#include "FirearmComponent.h"

UFirearmComponent::UFirearmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mMaxShotDistanceToDiffer = 200.00f;
    this->mDamage = 50.00f;
    this->mMaxRange = 2500.00f;
    this->mBulletSpeed = 8000.00f;
    this->mBulletSweepRadius = 100.00f;
    this->mBulletCollisionChannel = ECC_WorldStatic;
    this->mReloadAnimation = NULL;
    this->mDoSafeRounds = false;
    this->mMagazineSize = 1;
    this->mCurrentLoadedAmmo = 1;
    this->mFirearmSKM = NULL;
}

int32 UFirearmComponent::ShootAutoHit(AActor* shootAtActor, bool requirePreviousShotCloseToHit) {
    return 0;
}

int32 UFirearmComponent::Shoot() {
    return 0;
}

void UFirearmComponent::Reload() {
}

void UFirearmComponent::PlayReloadAnimation() {
}

void UFirearmComponent::OverrideBulletSpeed(float newBulletSpeed) {
}

void UFirearmComponent::OnShotReachedAutoHit(AActor* hitActor) {
}

void UFirearmComponent::OnShotReached() {
}

bool UFirearmComponent::IsLoaded() {
    return false;
}

bool UFirearmComponent::HasTarget() const {
    return false;
}

bool UFirearmComponent::HasClearLineOfFireTo(FVector TargetLocation, float allowedOffset) const {
    return false;
}

USkeletalMeshComponent* UFirearmComponent::GetFirearmSkeletalMesh() const {
    return NULL;
}

float UFirearmComponent::GetBulletSpeed() const {
    return 0.0f;
}

void UFirearmComponent::ClearBulletSpeedOverride() {
}

void UFirearmComponent::ClearAim() {
}

void UFirearmComponent::AimAtActor(AActor* Target) {
}

void UFirearmComponent::AimAt(FVector TargetLocation) {
}


