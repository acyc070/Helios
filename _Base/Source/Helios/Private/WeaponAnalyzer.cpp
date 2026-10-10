#include "WeaponAnalyzer.h"

UWeaponAnalyzer::UWeaponAnalyzer() {
    this->mLineOfFireAllowedOffset = 60.00f;
    this->mMagazineSize = 1;
    this->mMaxShotAttemps = 2;
    this->mCurrentShotAttempt = 0;
}

void UWeaponAnalyzer::OnShotReached(FHitResult currentHit, FHitResult initialHit) {
}


