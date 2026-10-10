#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenericGameEvent.h"
#include "FlashlightCombatComponent.generated.h"

class UAbilitySetOverrideData;
class UFlowControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UFlashlightCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mOutsideCombatAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mInCombatAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlowControlComponent* mFlowControlComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mCurrentAbilitySet;
    
public:
    UFlashlightCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInCombat(bool Value);
    
private:
    UFUNCTION()
    void OnPawnDeathEvent(const FGenericGameEvent& gameEvent);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInCombat() const;
    
};

