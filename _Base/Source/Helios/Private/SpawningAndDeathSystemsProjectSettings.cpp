#include "SpawningAndDeathSystemsProjectSettings.h"

USpawningAndDeathSystemsProjectSettings::USpawningAndDeathSystemsProjectSettings() {
    this->mPIEPlayFromHereRespawnStrategy = EPlayFromHereRespawnBehavior::RespawnAsNormalGameOnDeath;
    this->mDeathAndRespawnFadeTime = 2.00f;
    this->mCameraFadeHeadstartTime = 0.33f;
    this->mPostRespawnDelayBeforeFadeToGame = 0.67f;
}


