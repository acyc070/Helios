#include "CameraBlockingComponent.h"

UCameraBlockingComponent::UCameraBlockingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mCameraBlockingAxis = ECameraBlockingAxis::Auto;
    this->mSoftLimit = 30.00f;
    this->mSoftScale = 0.50f;
    this->mMinLookAround = 5.00f;
    this->mEnabled = true;
}


