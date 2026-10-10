#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilitySetOverride.h"
#include "ChalkboardSectionKey.h"
#include "HeliosActor.h"
#include "HeliosInteraction.generated.h"

class AActor;
class APawn;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class HELIOS_API AHeliosInteraction : public AHeliosActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mInteractionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* mInteractionTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mPawnFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mTriggerCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeoutAfterActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAnimationTimeoutAfterNoPlayerActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowAirborneInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAllowSlidingInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySetOverride mAbilitySetOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* mInteractor;
    
public:
    AHeliosInteraction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateInteraction(bool success);
    
private:
    UFUNCTION()
    void OnTriggerPrimitiveEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnTriggerPrimitiveBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionTriggered_Blueprint(APawn* interactor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionTick_Blueprint(APawn* interactor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionDeactivated_Blueprint();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionActivated_Blueprint();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInteractionInProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateInteraction(bool onOff);
    
};

