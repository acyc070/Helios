#include "PuzzleSplineDraggableActor.h"
#include "GrabHelper.h"

APuzzleSplineDraggableActor::APuzzleSplineDraggableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCustomMass = false;
    this->mTotalMass = 1.00f;
    this->mFrictionForce = 1.00f;
    this->mDraggingForceModifier = 50.00f;
    this->mGravityAcceleration = 17.00f;
    this->mMaxSpeed = 0.50f;
    this->bReactToHit = true;
    this->GrabHelperComponent = CreateDefaultSubobject<UGrabHelper>(TEXT("GrabHelperComponent"));
    this->bUseInteracterVelocity = false;
    this->GrabHelperComponent->SetupAttachment(RootComponent);
}

void APuzzleSplineDraggableActor::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


