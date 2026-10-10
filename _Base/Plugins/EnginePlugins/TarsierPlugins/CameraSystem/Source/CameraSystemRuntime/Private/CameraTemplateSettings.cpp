#include "CameraTemplateSettings.h"

FCameraTemplateSettings::FCameraTemplateSettings() {
    this->mCameraPositionLerpSpeed = 0.00f;
    this->mUseFollowRotation = false;
    this->mSyncedPositionAndRotation = false;
    this->mLerpFactor = ELerpFactor::Auto;
    this->mLookAroundYaw = 0.00f;
    this->mLookAroundPitch = 0.00f;
    this->mTransitionTime = 0.00f;
    this->mTransitionEasingFunction = EEasingFunc::Linear;
}

