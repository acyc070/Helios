#include "PhysicsAudioComponent.h"

UPhysicsAudioComponent::UPhysicsAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mRollSpeed = 0.00f;
    this->mRollSpeedRaw = 0.00f;
    this->mSlideSpeed = 0.00f;
    this->mSlideSpeedRaw = 0.00f;
    this->mSurfaceMaterial = TEXT("Default");
}

void UPhysicsAudioComponent::SetEnabled(bool inEnabled, float FadeTime) {
}

void UPhysicsAudioComponent::OnPrimitiveWake(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void UPhysicsAudioComponent::OnPrimitiveSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void UPhysicsAudioComponent::OnPrimitiveHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UPhysicsAudioComponent::GetVertexPaintData(bool& HasPaintData, FColor& PaintData) {
}


