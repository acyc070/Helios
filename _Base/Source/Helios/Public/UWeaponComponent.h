#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EAttackType.h"
#include "EDamageSourceType.h"
#include "EDamageType.h"
#include "EHitSoundType.h"
#include "FlowControlAnimNotifyData.h"
#include "HeldItemBaseComponent.h"
#include "UWeaponComponent.generated.h"

class AActor;
class AControlledPawn;
class UAbilitySetOverrideData;
class UAkAudioEvent;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UDEPRECATED_UWeaponComponent : public UHeldItemBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponBreak, AActor*, breaker);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStealthKill, AActor*, Target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAttackActionStart, AActor*, Instigator, AControlledPawn*, TargetPawn, int32, AttackIndex, EAttackType, AttackType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttackActionMiss);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttackActionHit, AActor*, Target, EHitSoundType, HitSoundType, UAkAudioEvent*, AudioEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackActionFinished, AActor*, Instigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackActionEnd, AActor*, Instigator, EAttackType, AttackType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackActionStart OnAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackActionFinished OnAttackFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackActionEnd OnAttackEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackActionHit OnAttackHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackActionMiss OnAttackMiss;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponBreak OnWeaponBreak;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageSourceType mDamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType mDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySetOverrideData* mSwingAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mHitBoxStartEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mSweepBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDebugCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mEnemyCurrentlyAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* mHitBoxComponent;
    
public:
    UDEPRECATED_UWeaponComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnWeaponAnimNotify(const FFlowControlAnimNotifyData& AnimNotify);
    
protected:
    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* HitComponent, AActor* hitActor, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAttackFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsBreakable();
    
    UFUNCTION(BlueprintCallable)
    void BreakWeapon(AActor* breaker);
    
};

