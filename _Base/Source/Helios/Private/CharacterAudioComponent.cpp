#include "CharacterAudioComponent.h"

UCharacterAudioComponent::UCharacterAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mAudioComponent = NULL;
    this->mOwnerPawn = NULL;
    this->mAIChalkboard = NULL;
    this->mCurrentThreatLevel = EThreatLevel::NoThreat;
    this->mPawnMovementRatio = 0.00f;
    this->mDistanceToPlayer = 340282346638528859811704183484516925440.00f;
    this->mCurrentGrabState = EGrabState::Start;
    this->mDebugGrabMaterial = false;
    this->mDebugFloorMaterial = false;
    this->mDebugOverlappingSurfaces = false;
    this->mGrabDetectionSphereSize = 10.00f;
}

void UCharacterAudioComponent::UpdateOverlappingSurfaces(TArray<TEnumAsByte<EPhysicalSurface>> surfaceTypesToFind, float SphereRadius, TEnumAsByte<ECollisionChannel> CollisionChannel) {
}

void UCharacterAudioComponent::UpdateFloorMaterial(const float forwardOffset, const float traceLength) {
}

void UCharacterAudioComponent::SendThreatEvent(EThreatLevel threatLevel) {
}




void UCharacterAudioComponent::OnGrabIntentChanged(bool wantsToGrab) {
}



void UCharacterAudioComponent::OnGrabAnimationStarted(float Timestamp) {
}



void UCharacterAudioComponent::OnAudioVolumeTransition(AAkAudioVolume* AudioVolume) {
}




FName UCharacterAudioComponent::GetSurfaceName(TEnumAsByte<EPhysicalSurface> Surface) {
    return NAME_None;
}

void UCharacterAudioComponent::FindVertexPaintData(bool& HasPaintData, FColor& PaintData) {
}

TEnumAsByte<EPhysicalSurface> UCharacterAudioComponent::FindGrabMaterial(const FVector& TraceStart, const FVector& TraceEnd) const {
    return SurfaceType_Default;
}




