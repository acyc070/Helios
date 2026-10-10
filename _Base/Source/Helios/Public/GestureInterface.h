#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GestureData.h"
#include "GestureOverrideInterface.h"
#include "SoftEnumName.h"
#include "Templates/SubclassOf.h"
#include "GestureInterface.generated.h"

class AActor;
class UAnimMetaData;
class UChalkboardWrapper;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UGestureInterface : public UActorComponent, public IGestureOverrideInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UChalkboardWrapper> mChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IGestureOverrideInterface>> mGestureOverriders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGestureOverrideInterface> mGestureOverriderAtStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> mGestureTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> mGestureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mGestureEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mPlayerAloneGestureEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGestureBackToNormalCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGestureData mGestureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle mGestureBackToNormalTimerHandle;
    
public:
    UGestureInterface(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryStartGesturing();
    
    UFUNCTION(BlueprintCallable)
    void StopGesturing();
    
    UFUNCTION(BlueprintCallable)
    void SetGestureOverrider(TScriptInterface<IGestureOverrideInterface> overrider);
    
    UFUNCTION()
    void OnAnimationStateFinished(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData);
    
    UFUNCTION(BlueprintCallable)
    void ClearGestureOverrider(TScriptInterface<IGestureOverrideInterface> overrider);
    

    // Fix for true pure virtual functions not being implemented
};

