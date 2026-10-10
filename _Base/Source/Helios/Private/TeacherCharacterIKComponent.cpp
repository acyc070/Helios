#include "TeacherCharacterIKComponent.h"

UTeacherCharacterIKComponent::UTeacherCharacterIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mUseBlendCurve = false;
    this->mBlendInTime = 1.00f;
    this->mBlendOutTime = 1.00f;
    this->mIKTasksNumber = 5;
    this->mEnableTranslation = true;
    this->mEnableRotation = true;
    this->mMaxSplinePoints = 8;
    this->mMaxAttackDistance = 1200.00f;
    this->mMaxAttackTime = 1.00f;
    this->mIKAttackCurve = NULL;
    this->mMaxRetractTime = 1.00f;
    this->mMaxRetractSuccessTime = 1.00f;
    this->mMaxRetractFailTime = 1.00f;
    this->mIKRetractCurve = NULL;
    this->mPredictionTime = 1.00f;
    this->bUseCurveSpline = false;
    this->mControlPointHeight = 200.00f;
    this->mBezierCurvePoints = 10;
    this->bUseHoldBite = false;
    this->mMinHoldTime = 1.00f;
    this->mMaxHoldTime = 5.00f;
    this->mHeadCollisionRadius = 20.00f;
    this->mCloseKillDistanceAbort = 250.00f;
    this->mHeadBoneName = TEXT("c_head_bne");
    this->mStartBiteRelativeDistance = 0.70f;
    this->mTargetComponent = NULL;
    this->mOwnerPawn = NULL;
    this->mSplineComponent = NULL;
    this->mAnimator = NULL;
    this->mStaticSplineComponent = NULL;
}

EIKTeacherNeckState UTeacherCharacterIKComponent::GetNeckState() {
    return EIKTeacherNeckState::Idle;
}


