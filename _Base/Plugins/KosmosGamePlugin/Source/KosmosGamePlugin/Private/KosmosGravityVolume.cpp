#include "KosmosGravityVolume.h"

AKosmosGravityVolume::AKosmosGravityVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AffectObjects = false;
    this->LowGravityScale = 0.45f;
    this->FallScaleModifier = 0.60f;
    this->JumpHeightScaleModifier = 0.60f;
    this->JumpDistanceScaleModifier = 0.60f;
    this->JumpSpeedScaleModifier = 0.80f;
    this->NormalGravityFallConcus = 595.00f;
    this->NormalGravityFallDeath = 795.00f;
    this->LowGravityFallConcus = 40000.00f;
    this->LowGravityFallDeath = 80000.00f;
}


