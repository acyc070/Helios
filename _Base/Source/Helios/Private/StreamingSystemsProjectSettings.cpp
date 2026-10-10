#include "StreamingSystemsProjectSettings.h"

UStreamingSystemsProjectSettings::UStreamingSystemsProjectSettings() {
    this->mEnableStreaming = true;
    this->mLevelsOptedInForStreaming.AddDefaulted(5);
    this->mEnableStreamingVolumes = true;
    this->mAutomaticVolumeNeighboursPreloadingDepth = 4;
}

UStreamingSystemsProjectSettings* UStreamingSystemsProjectSettings::GetStreamingProjectSettings() {
    return NULL;
}


