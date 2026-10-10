#include "KosmosSlingshotProjectile.h"
#include "NinjaProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

AKosmosSlingshotProjectile::AKosmosSlingshotProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->ProjectileMovement = CreateDefaultSubobject<UNinjaProjectileMovementComponent>(
        TEXT("ProjectileMovementComponent"));
    this->CollisionComp = (USphereComponent*)RootComponent;
    this->mDestroyOnHit = false;
    this->PushForceMultiplier = 10.00f;
}

void AKosmosSlingshotProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


