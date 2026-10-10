#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 4;
    this->DefaultOcclusionCollisionChannel = ECC_Visibility;
    this->AuxBusPreviewEvent = TEXT("Play_AuxBus_Preview");
    this->mGlobalAmbience = TEXT("Play_Amb_Default");
    this->mGlobalReverb = TEXT("Rvb_Default");
    this->SplitSwitchContainerMedia = false;
    this->UseEventBasedPackaging = false;
    this->EnableAutomaticAssetSynchronization = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->AskedToUseNewAssetManagement = true;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
}


