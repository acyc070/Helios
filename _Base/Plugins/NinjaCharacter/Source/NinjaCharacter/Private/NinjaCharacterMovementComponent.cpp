#include "NinjaCharacterMovementComponent.h"
#include "Engine/EngineTypes.h"

UNinjaCharacterMovementComponent::UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkSmoothingMode = ENetworkSmoothingMode::Linear;
    this->bRevertToDefaultGravity = false;
    this->UseWorldGravity = true;
    this->bLandOnAnySurface = false;
    this->GravityDirectionMode = ENinjaGravityDirectionMode::Fixed;
    this->GravityActor = NULL;
    this->bDisableGravityReplication = false;
    this->bAlignGravityToBase = false;
    this->bAlignComponentToFloor = false;
    this->bAlignComponentToGravity = false;
    this->bAlwaysRotateAroundCenter = false;
    this->bRotateVelocityOnGround = false;
}

void UNinjaCharacterMovementComponent::SetSplineTangentGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetSplinePlaneGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetSplineGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd) {
}

void UNinjaCharacterMovementComponent::SetPointGravityDirectionFromActor(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetPointGravityDirection(const FVector& NewGravityPoint) {
}

void UNinjaCharacterMovementComponent::SetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd) {
}

void UNinjaCharacterMovementComponent::SetCollisionGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetBoxGravityDirectionFromActor(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent) {
}

void UNinjaCharacterMovementComponent::SetAlignGravityToBase(bool bNewAlignGravityToBase) {
}

void UNinjaCharacterMovementComponent::SetAlignComponentToGravity(bool bNewAlignComponentToGravity) {
}

void UNinjaCharacterMovementComponent::SetAlignComponentToFloor(bool bNewAlignComponentToFloor) {
}

void UNinjaCharacterMovementComponent::K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal) {
}

void UNinjaCharacterMovementComponent::K2_SetFixedGravityDirection(const FVector& NewGravityDirection) {
}

float UNinjaCharacterMovementComponent::GetGravityMagnitude() const {
    return 0.0f;
}

FVector UNinjaCharacterMovementComponent::GetGravityDirection(bool bAvoidZeroGravity) const {
    return FVector{};
}

void UNinjaCharacterMovementComponent::ClientSetSplineTangentGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::ClientSetSplinePlaneGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::ClientSetSplineGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::ClientSetSegmentGravityDirection_Implementation(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd) {
}

void UNinjaCharacterMovementComponent::ClientSetPointGravityDirectionFromActor_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::ClientSetPointGravityDirection_Implementation(const FVector& NewGravityPoint) {
}

void UNinjaCharacterMovementComponent::ClientSetPlaneGravityDirection_Implementation(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal) {
}

void UNinjaCharacterMovementComponent::ClientSetLineGravityDirection_Implementation(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd) {
}

void UNinjaCharacterMovementComponent::ClientSetGravityScale_Implementation(float NewGravityScale) {
}

void UNinjaCharacterMovementComponent::ClientSetFixedGravityDirection_Implementation(const FVector& NewFixedGravityDirection) {
}

void UNinjaCharacterMovementComponent::ClientSetCollisionGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::ClientSetBoxGravityDirectionFromActor_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::ClientSetBoxGravityDirection_Implementation(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent) {
}

void UNinjaCharacterMovementComponent::ClientEnableAlignGravityToBase_Implementation() {
}

void UNinjaCharacterMovementComponent::ClientEnableAlignComponentToGravity_Implementation() {
}

void UNinjaCharacterMovementComponent::ClientEnableAlignComponentToFloor_Implementation() {
}

void UNinjaCharacterMovementComponent::ClientDisableAlignGravityToBase_Implementation() {
}

void UNinjaCharacterMovementComponent::ClientDisableAlignComponentToGravity_Implementation() {
}

void UNinjaCharacterMovementComponent::ClientDisableAlignComponentToFloor_Implementation() {
}


