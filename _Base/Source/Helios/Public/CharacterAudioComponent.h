#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "AIStateChangeEvent.h"
#include "ECharacterAudioEventSource.h"
#include "ECharacterAudioEventType.h"
#include "EGrabEventType.h"
#include "EGrabState.h"
#include "EThreatLevel.h"
#include "FallData.h"
#include "GenericGestureEvent.h"
#include "GrabStateChangeDelegate.h"
#include "PawnStateEvent.h"
#include "SmartPointProgressEvent.h"
#include "CharacterAudioComponent.generated.h"

class AActor;
class AAkAudioVolume;
class AControlledPawn;
class UAkAudioEvent;
class UAkComponent;
class UAnimMetaData;
class UChalkboardWrapper;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UCharacterAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, float> mOverlappingSurfaces;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabStateChange mOnGrabStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* mAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mFloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AControlledPawn* mOwnerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mAIChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreatLevel mCurrentThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPawnMovementRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrabState mCurrentGrabState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugGrabMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugFloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugOverlappingSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGrabDetectionSphereSize;
    
public:
    UCharacterAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOverlappingSurfaces(TArray<TEnumAsByte<EPhysicalSurface>> surfaceTypesToFind, float SphereRadius, TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFloorMaterial(const float forwardOffset, const float traceLength);
    
    UFUNCTION(BlueprintCallable)
    void SendThreatEvent(EThreatLevel threatLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnStateEvent(const FPawnStateEvent& PawnStateEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPawnGestureEvent(const FGenericGestureEvent pawnGrabEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLanded(AControlledPawn* Pawn, const FFallData& FallData);
    
    UFUNCTION()
    void OnGrabIntentChanged(bool wantsToGrab);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabEvent(const EGrabEventType grabType, const FString& Material, const FVector grabLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabEnded(const EGrabEventType grabType);
    
    UFUNCTION()
    void OnGrabAnimationStarted(float Timestamp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnAudioVolumeTransition(AAkAudioVolume* AudioVolume);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotify(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAIStateChangeEvent(const FAIStateChangeEvent& aiStateFeedbackEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAISmartPointProgressEvent(const FSmartPointProgressEvent& aiSmartpointEvent);
    
    UFUNCTION(BlueprintCallable)
    static FName GetSurfaceName(TEnumAsByte<EPhysicalSurface> Surface);
    
    UFUNCTION(BlueprintCallable)
    void FindVertexPaintData(bool& HasPaintData, FColor& PaintData);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPhysicalSurface> FindGrabMaterial(const FVector& TraceStart, const FVector& TraceEnd) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CharacterAudioEvent(ECharacterAudioEventSource eventSource, ECharacterAudioEventType EventType, FName customType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimationAudioNotify(const FName& EventName, const UAkAudioEvent* AudioEvent);
    
};

