#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAINavigationStrategy.h"
#include "SoftEnumName.h"
#include "PatternLibrary.generated.h"

class AActor;
class AControlledPawn;
class UAIBaseReactivePattern;
class UAnimSequenceBase;
class UBaseGrabberInterface;
class UPickupComponent;

UCLASS(Blueprintable)
class HELIOS_API UPatternLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPatternLibrary();

    UFUNCTION(BlueprintCallable)
    static void SpawningAnims(UAIBaseReactivePattern* Pattern, UAnimSequenceBase*& SleepingAnimation, UAnimSequenceBase*& WakeUpAnimation, bool& HasWakeUpAnimation);
    
    UFUNCTION(BlueprintCallable)
    static void RetrieveValidPlayerPawn(UAIBaseReactivePattern* Pattern, bool& Exists, bool& Alive, AControlledPawn*& PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerInteraction(UAIBaseReactivePattern* Pattern, bool& PlayerExists, bool& Grabbing, UBaseGrabberInterface*& ActiveGrabInterface, AActor*& GrabbedActor, float& GrabDuration, bool& WantsToTouch, bool& Touching, AActor*& TouchedActor);
    
    UFUNCTION(BlueprintCallable)
    static void Player(UAIBaseReactivePattern* Pattern, bool& Exists, bool& Alive, AControlledPawn*& PlayerPawn, float& Distance, FVector& Velocity, float& InactiveTime);
    
    UFUNCTION(BlueprintCallable)
    static float PickupRange(UAIBaseReactivePattern* Pattern);
    
    UFUNCTION(BlueprintCallable)
    static void NewestNoise(UAIBaseReactivePattern* Pattern, bool& Exists, AActor*& Instigator, FVector& Location, int32& StimulusTags, FSoftEnumName& StimulusID, float& TimeSince);
    
    UFUNCTION(BlueprintCallable)
    static void NewestDetection(UAIBaseReactivePattern* Pattern, bool& Exists, float& Time, float& TimeSince, FVector& InitialLocation, FVector& UpdatedLocation, AActor*& Actor, int32& StimulusTags);
    
    UFUNCTION(BlueprintCallable)
    static void Locomotion(UAIBaseReactivePattern* Pattern, EAINavigationStrategy& NavStrategy, bool& IsMoving, bool& IsMovingToPoint, float& DistToMoveTarget, bool& IsSprinting, bool& IsJumping, bool& IsClimbing, bool& IsSliding, bool& IsFalling);
    
    UFUNCTION(BlueprintCallable)
    static void Interaction(UAIBaseReactivePattern* Pattern, bool& TODOIsUsingPP, bool& IsGrabbing, AActor*& GrabbedActor, bool& IsTouchingActor, AActor*& TouchedActor, float& TimeSinceLastTouch);
    
    UFUNCTION(BlueprintCallable)
    static void Idling(UAIBaseReactivePattern* Pattern, bool& IdlingAbility, float& TimeSinceLastAnimOrMove, float& TimeSinceLastAnim, float& TimeSinceLastMove);
    
    UFUNCTION(BlueprintCallable)
    static void HeldItem(UAIBaseReactivePattern* Pattern, bool& IsHoldingAny, UPickupComponent*& HeldPickup, int32& HeldPickupTags, FSoftEnumName& HeldPickupHint);
    
    UFUNCTION(BlueprintCallable)
    static void CurrentTarget(UAIBaseReactivePattern* Pattern, bool& Exists, bool& Alive, AActor*& Actor, AControlledPawn*& ControlledPawn, float& Distance, bool& IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static void Attention(UAIBaseReactivePattern* Pattern, bool& HasAttentionTarget, AActor*& MainAttentionTarget);
    
};

