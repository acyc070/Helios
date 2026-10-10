#include "PuzzleDoorActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APuzzleDoorActor::APuzzleDoorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Hinges"));
    this->mPushingForceModifier = 0.01f;
    this->mHitBehavior = EDoorHitResponse::PositionBased;
    this->mIdleBehaviour = EDoorIdleBehaviour::Idle_Stay;
    this->mConstantForce = 15.00f;
    this->mMaxSpeed = 30.00f;
    this->mMaxAcceleration = 20.00f;
    this->mFriction = 10.00f;
    this->mNeutralSpeed = 10.00f;
    this->mInitialAngle = 0.00f;
    this->mNeutralAngle = 30.00f;
    this->mDoorInteractors = 7;
    this->doSpecialHit = true;
    this->mSpecialHitSpeedTrigger = 200.00f;
    this->mSpecialHitSpeedBoost = 5.00f;
    this->mSpecialHitCooldown = 1.00f;
    this->mHinges = (USceneComponent*)RootComponent;
    this->mDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    this->mSweepCollisionProfile = TEXT("PawnTrigger");
    this->mBouncinessFactor = 3.00f;
    this->mBouncinessFactorWhenDragged = 50.00f;
    this->mSpeedBumpThreshold = 15.00f;
    this->mDoorMesh->SetupAttachment(RootComponent);
}

void APuzzleDoorActor::SetDoorSpeedTo(float Speed) {
}

void APuzzleDoorActor::SetDoorAngleInterval(float Min, float Max) {
}

void APuzzleDoorActor::OnDoorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

float APuzzleDoorActor::GetDoorSpeed() {
    return 0.0f;
}


