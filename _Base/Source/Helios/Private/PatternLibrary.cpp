#include "PatternLibrary.h"

UPatternLibrary::UPatternLibrary() {
}

void UPatternLibrary::SpawningAnims(UAIBaseReactivePattern* Pattern, UAnimSequenceBase*& SleepingAnimation, UAnimSequenceBase*& WakeUpAnimation, bool& HasWakeUpAnimation) {
}

void UPatternLibrary::RetrieveValidPlayerPawn(UAIBaseReactivePattern* Pattern, bool& Exists, bool& Alive, AControlledPawn*& PlayerPawn) {
}

void UPatternLibrary::PlayerInteraction(UAIBaseReactivePattern* Pattern, bool& PlayerExists, bool& Grabbing, UBaseGrabberInterface*& ActiveGrabInterface, AActor*& GrabbedActor, float& GrabDuration, bool& WantsToTouch, bool& Touching, AActor*& TouchedActor) {
}

void UPatternLibrary::Player(UAIBaseReactivePattern* Pattern, bool& Exists, bool& Alive, AControlledPawn*& PlayerPawn, float& Distance, FVector& Velocity, float& InactiveTime) {
}

float UPatternLibrary::PickupRange(UAIBaseReactivePattern* Pattern) {
    return 0.0f;
}

void UPatternLibrary::NewestNoise(UAIBaseReactivePattern* Pattern, bool& Exists, AActor*& Instigator, FVector& Location, int32& StimulusTags, FSoftEnumName& StimulusID, float& TimeSince) {
}

void UPatternLibrary::NewestDetection(UAIBaseReactivePattern* Pattern, bool& Exists, float& Time, float& TimeSince, FVector& InitialLocation, FVector& UpdatedLocation, AActor*& Actor, int32& StimulusTags) {
}

void UPatternLibrary::Locomotion(UAIBaseReactivePattern* Pattern, EAINavigationStrategy& NavStrategy, bool& IsMoving, bool& IsMovingToPoint, float& DistToMoveTarget, bool& IsSprinting, bool& IsJumping, bool& IsClimbing, bool& IsSliding, bool& IsFalling) {
}

void UPatternLibrary::Interaction(UAIBaseReactivePattern* Pattern, bool& TODOIsUsingPP, bool& IsGrabbing, AActor*& GrabbedActor, bool& IsTouchingActor, AActor*& TouchedActor, float& TimeSinceLastTouch) {
}

void UPatternLibrary::Idling(UAIBaseReactivePattern* Pattern, bool& IdlingAbility, float& TimeSinceLastAnimOrMove, float& TimeSinceLastAnim, float& TimeSinceLastMove) {
}

void UPatternLibrary::HeldItem(UAIBaseReactivePattern* Pattern, bool& IsHoldingAny, UPickupComponent*& HeldPickup, int32& HeldPickupTags, FSoftEnumName& HeldPickupHint) {
}

void UPatternLibrary::CurrentTarget(UAIBaseReactivePattern* Pattern, bool& Exists, bool& Alive, AActor*& Actor, AControlledPawn*& ControlledPawn, float& Distance, bool& IsVisible) {
}

void UPatternLibrary::Attention(UAIBaseReactivePattern* Pattern, bool& HasAttentionTarget, AActor*& MainAttentionTarget) {
}


