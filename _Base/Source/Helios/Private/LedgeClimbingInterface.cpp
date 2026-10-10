#include "LedgeClimbingInterface.h"
#include "EAbilitySetGrab.h"

ULedgeClimbingInterface::ULedgeClimbingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mGrabType = EAbilitySetGrab::GrabClimb;
    this->mMinHeightForLedgeHang = 130.00f;
    this->mMaxLedgeAngleFromHorizontal = 45.00f;
    this->mMaxDistToLedgeStandGrab = 15.00f;
    this->mMaxDistToLedgeFallGrab = 50.00f;
    this->mMaxDistToLedgeFallPassiveGrab = 25.00f;
    this->mMaxDistToLedgeFromDraggable = 50.00f;
    this->mGrabPointSearchDistance = 40.00f;
    this->mMaxAngleToClimbUp = 45.00f;
    this->mMinInputSizeToClimbUp = 0.25f;
    this->mTimeBeforeClimbAllowed = 0.30f;
    this->mFreeHangImpactMinSpeed = 200.00f;
    this->mFreeHangOffsetZ = -100.00f;
    this->mMaxStepUpControlAngle = 35.00f;
    this->mClimbBlockTestForwardDisplacement = 20.00f;
    this->mClimbBlockTestCapsuleRadius = 15.00f;
    this->mClimbBlockTestFloorMargin = 10.00f;
    this->mClimbBlockTestCeilingMargin = 5.00f;
    this->mAerialPassiveMinSpeed = 30.00f;
    this->mAerialPassiveMaxVelocityAngle = 80.00f;
    this->mAerialPassiveMaxInputAngle = 80.00f;
    this->IKOffsetHands = 15.00f;
    this->IKOffsetFeet = 8.50f;
    this->mIKFixupStrengthTranslation = 10.00f;
    this->mIKFixupStrengthYaw = 30.00f;
    this->IKFixupComparisonPose = TEXT("IKComparePose");
    this->CurveName_IKFixUp = TEXT("IK_FixUp");
    this->mImpactMomentumDecay = 10.00f;
    this->mImpactNormalVelocityScale = 0.40f;
    this->mFallVelocityScale = 0.30f;
    this->mCachedMovementBase = NULL;
    this->mCurrentLedge = NULL;
    this->mLocomotionComponent = NULL;
    this->mCharacterIKControllerComponent = NULL;
    this->mSkeletalMeshComponent = NULL;
}

void ULedgeClimbingInterface::OnAnimNotify(const FFlowControlAnimNotifyData& AnimNotify) {
}


