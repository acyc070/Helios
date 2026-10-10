#include "StumbleInterface.h"

UStumbleInterface::UStumbleInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnableStumbleOnObjects = true;
    this->mStumbleOnObjectsDuration = 0.60f;
    this->mResetStumbleOnObjectsDelay = 1.00f;
    this->mStumbleOnObjectsAnimationSlots = NULL;
    this->mFlowControlComponent = NULL;
}

void UStumbleInterface::OnLimbColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


