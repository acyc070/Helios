#include "DamageReciever.h"

UDamageReciever::UDamageReciever(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mHitSoundType = EHitSoundType::Default;
    this->mAudioEvent = NULL;
}

void UDamageReciever::OnWeaponHit(AActor* Instigator, float damageAmount, UWeaponComponentCode* Weapon, const FVector& HitLocation, UPrimitiveComponent* HitComponent) {
}


