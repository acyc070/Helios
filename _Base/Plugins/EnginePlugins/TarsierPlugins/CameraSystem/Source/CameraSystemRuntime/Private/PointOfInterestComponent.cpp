#include "PointOfInterestComponent.h"

UPointOfInterestComponent::UPointOfInterestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mLerpSpeedWeight = 1.00f;
    this->mInnerRadius = 100.00f;
    this->mOuterRadius = 500.00f;
    this->mWeight = 0.50f;
    this->mCameraZoom = 0.00f;
    this->mCameraZoomInner = 0.10f;
    this->mCameraZoomOuter = 0.00f;
    this->mLerpSpeedZoom = 1.00f;
    this->mCameraManager = NULL;
}


