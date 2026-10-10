#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttachPointSetup.h"
#include "EAttachPoint.h"
#include "FlowControlAnimNotifyData.h"
#include "GrabActorAnimationStartedDelegate.h"
#include "GrabIntentChangedDelegate.h"
#include "GrabbedActorEventDelegate.h"
#include "GrabActorComponent.generated.h"

class AActor;
class UAICarryComponent;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UGrabActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabIntentChanged mOnGrabIntentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabActorAnimationStarted mOnGrabAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabbedActorEvent mOnActorGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mAnimationStartNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttachPoint, FAttachPointSetup> mAttachPoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAICarryComponent* mCarryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EAttachPoint> mNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EAttachPoint> StartGrabNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EAttachPoint> EndGrabNotifies;
    
public:
    UGrabActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopListeningToGrabs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveListenToAttachPoint(EAttachPoint attachPoint);
    
private:
    UFUNCTION()
    void NotifyHit(const FFlowControlAnimNotifyData& AnimNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    void ListenForGrab(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void AddListenToAttachPoint(EAttachPoint attachPoint, AActor* Target);
    
};

