#include "GrabHelper.h"

UGrabHelper::UGrabHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->GrabHelperShape = EGrabHelperShape::Bar;
    this->mPhysicalSurfaceOverride = SurfaceType_Default;
    this->mCanBeGrabbedAlways = true;
    this->AIPriorityMultiplier = 1.00f;
    this->mAllowClimbUp = false;
    this->mOccupied = false;
    this->mEnabled = true;
    this->mIsPassive = false;
}

void UGrabHelper::OnWorldReloaded(UWorld* World) {
}

bool UGrabHelper::IsPassiveHelper() const {
    return false;
}

bool UGrabHelper::CanStartGrab() const {
    return false;
}

bool UGrabHelper::CanContinueGrab() const {
    return false;
}


