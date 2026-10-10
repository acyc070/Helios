#include "HeliosPlayerStart.h"

AHeliosPlayerStart::AHeliosPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mIsDefault = false;
    this->mIsSublevelDefault = false;
    this->mAudioFadeInTime = 2.00f;
}

void AHeliosPlayerStart::Teleport(int32 choice, AHeliosPlayerStart* teleportLocation) {
}

bool AHeliosPlayerStart::IsCurrentCheckpoint() const {
    return false;
}

FDLCTag AHeliosPlayerStart::GetDLCTag() const {
    return FDLCTag{};
}


