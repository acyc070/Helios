#include "LookAtPoint.h"

ULookAtPoint::ULookAtPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mClassToRegister = ULookAtPoint::StaticClass();
    this->mUseLookAtVolume = false;
    this->mViewRange = 500.00f;
    this->mType = 0;
}


