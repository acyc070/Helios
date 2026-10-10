#pragma once
#include "CoreMinimal.h"
#include "DamageEventDelegateDelegate.h"
#include "DamageReciever.h"
#include "EDamageSourceType.h"
#include "HealthAndDamageComponent.generated.h"

class UDeathHandlerDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UHealthAndDamageComponent : public UDamageReciever {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mImmuneToDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsDamageableAfterDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnDamageEventBPCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageSourceType, TSoftObjectPtr<UDeathHandlerDataAsset>> mDeathHandlers;
    
    UHealthAndDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float RemainingHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDamageableAfterDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
};

