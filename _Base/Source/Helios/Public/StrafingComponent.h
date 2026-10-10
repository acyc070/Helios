#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlowControlAnimNotifyData.h"
#include "MovementControllerInterface.h"
#include "StrafingComponent.generated.h"

class UAbilitySetOverrideData;
class UAnimationOverrideComponent;
class UCharacterAnimationSlots;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UStrafingComponent : public UActorComponent, public IMovementControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInputDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mStandingStillMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mAnimationSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAnimationOverrideComponent* mAnimationOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mIsStrafing;
    
public:
    UStrafingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnWeaponAnimNotify(const FFlowControlAnimNotifyData& AnimNotify);
    

    // Fix for true pure virtual functions not being implemented
};

