#include "SneakComponent.h"

USneakComponent::USneakComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnterCrouchThreshold = 0.10f;
    this->mExitCrouchThreshold = 0.05f;
    this->mPawnCrouchHeight = 62.50f;
    this->mCeilingMargin = 30.00f;
    this->mCeilingAngleThreshold = 45.00f;
    this->mJumpWindowTime = 0.50f;
    this->mMaxSpeed = 200.00f;
    this->mMaxSpeedSprinting = 250.00f;
    this->mFlowControlComponent = NULL;
    this->mOwnerPawn = NULL;
    this->mOwnerCapsule = NULL;
    this->mOwnerMesh = NULL;
    this->mOwnerDefaultPawn = NULL;
    this->mOwnerDefaultCapsule = NULL;
    this->mOwnerDefaultMesh = NULL;
    this->mWantsToJump = false;
}


