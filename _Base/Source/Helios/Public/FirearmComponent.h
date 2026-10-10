#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ShotReachedDelegate.h"
#include "SocketSelector.h"
#include "WeaponFiredDelegate.h"
#include "FirearmComponent.generated.h"

class AActor;
class UAnimationAsset;
class UDeathHandlerDataAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UFirearmComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxShotDistanceToDiffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBulletSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBulletSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mDeathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mWeaponMeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocketSelector mWeaponSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> mBulletCollisionChannel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponFired mOnWeaponFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShotReached mOnShotReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mReloadAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDoSafeRounds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mMagazineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCurrentLoadedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mFirearmSKM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector mPreviousShotLocation;
    
public:
    UFirearmComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 ShootAutoHit(AActor* shootAtActor, bool requirePreviousShotCloseToHit);
    
    UFUNCTION(BlueprintCallable)
    int32 Shoot();
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable)
    void PlayReloadAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OverrideBulletSpeed(float newBulletSpeed);
    
private:
    UFUNCTION()
    void OnShotReachedAutoHit(AActor* hitActor);
    
    UFUNCTION()
    void OnShotReached();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLoaded();
    
    UFUNCTION(BlueprintPure)
    bool HasTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool HasClearLineOfFireTo(FVector TargetLocation, float allowedOffset) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetFirearmSkeletalMesh() const;
    
    UFUNCTION(BlueprintPure)
    float GetBulletSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBulletSpeedOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearAim();
    
    UFUNCTION(BlueprintCallable)
    void AimAtActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void AimAt(FVector TargetLocation);
    
};

