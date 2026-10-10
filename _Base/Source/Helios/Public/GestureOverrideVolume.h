#pragma once
#include "CoreMinimal.h"
#include "AnimationOverrideHandle.h"
#include "GestureData.h"
#include "GestureOverrideInterface.h"
#include "GestureTriggerSignatureDelegate.h"
#include "PawnTriggerVolume.h"
#include "SoftEnumName.h"
#include "Templates/SubclassOf.h"
#include "GestureOverrideVolume.generated.h"

class AActor;
class APawn;
class UAbilitySetOverrideData;
class UCharacterAnimationSlots;

UCLASS(Blueprintable)
class HELIOS_API AGestureOverrideVolume : public APawnTriggerVolume, public IGestureOverrideInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGestureData mGestureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> mGestureTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> mGestureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mAnimationSlotToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimationOverrideHandle mAnimationSlotOverrideHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mAbilitySetToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mGestureEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mPlayerAloneGestureEventName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureTriggerSignature OnGestureTriggerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureTriggerSignature OnGestureTriggerFinished;
    
public:
    AGestureOverrideVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

