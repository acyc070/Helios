#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EHitSoundType.h"
#include "DamageReciever.generated.h"

class AActor;
class UAkAudioEvent;
class UPrimitiveComponent;
class UWeaponComponentCode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UDamageReciever : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FWeaponHit, AActor*, Instigator, float, damageAmount, UWeaponComponentCode*, Weapon, FVector, HitLocation, UPrimitiveComponent*, HitComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponHit mOnWeaponHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitSoundType mHitSoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mAudioEvent;
    
    UDamageReciever(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnWeaponHit(AActor* Instigator, float damageAmount, UWeaponComponentCode* Weapon, const FVector& HitLocation, UPrimitiveComponent* HitComponent);
    
};

