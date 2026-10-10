#pragma once
#include "CoreMinimal.h"
#include "ObjectPropertiesComponent.h"
#include "OnActionDelegate.h"
#include "BalanceBeamComponent.generated.h"

class UAbilitySetOverrideData;
class UCharacterAnimationSlots;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UBalanceBeamComponent : public UObjectPropertiesComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAction mOnStartBalancing;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAction mOnStopBalancing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mAbilitySetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAnimationSlots* mAnimationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAngleToStartFalloff;
    
public:
    UBalanceBeamComponent(const FObjectInitializer& ObjectInitializer);

};

