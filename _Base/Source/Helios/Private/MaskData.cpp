#include "MaskData.h"

FMaskData::FMaskData() {
    this->Icon = NULL;
    this->MaskAsset = NULL;
    this->ShouldHideHair = false;
    this->ExcludeFromAchievements = false;
    this->LockState = EMaskLockState::Locked;
}

