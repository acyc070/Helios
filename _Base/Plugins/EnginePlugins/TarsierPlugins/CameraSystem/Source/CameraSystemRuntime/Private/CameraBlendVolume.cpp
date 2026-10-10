#include "CameraBlendVolume.h"

ACameraBlendVolume::ACameraBlendVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mBlendType = EBlendType::Position;
    this->mApplyBlendVolumeBlockers = false;
}


