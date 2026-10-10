#include "KosmosSlingshotActor.h"

AKosmosSlingshotActor::AKosmosSlingshotActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->UsableObjectComponent = NULL;
    this->PickupComponent = NULL;
    this->BigShotTimeout = 5.00f;
    this->FireCooldown = 0.20f;
    this->WindingUpTime = 1.00f;
}

void AKosmosSlingshotActor::IsSlingshotWindingUp(bool& yesno, float& WindupPercent) {
}

bool AKosmosSlingshotActor::IsSlingshotWindedUp() {
    return false;
}

TSoftObjectPtr<UTargetComponent> AKosmosSlingshotActor::GetMainTarget() {
    return NULL;
}

void AKosmosSlingshotActor::GetAnimationData(float& leftright, float& updown, float& Delta, bool& IsTargeting, float& WindupPercent) {
}

AKosmosSlingshotProjectile* AKosmosSlingshotActor::Fire(const FVector& FireVelocity) {
    return NULL;
}

void AKosmosSlingshotActor::EndPress(AActor* me) {
}

void AKosmosSlingshotActor::BeginPress(AActor* me) {
}


