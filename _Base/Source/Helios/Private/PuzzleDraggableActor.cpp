#include "PuzzleDraggableActor.h"
#include "Components/StaticMeshComponent.h"

APuzzleDraggableActor::APuzzleDraggableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuzzlePieceSMRoot"));
    this->mDraggingForceModifier = 1.00f;
    this->mRotationalForceModifier = 1.00f;
    this->mJustPlayerModifier = 0.00f;
    this->mJustPlaypalModifier = 0.00f;
    this->mBothPlayerModifier = 1.30f;
    this->mBothPlaypalModifier = 0.00f;
    this->mRootSceneComponent = (UPrimitiveComponent*)RootComponent;
    this->mGrabbingLinearDamping = -1.00f;
    this->mGrabbingAngularDamping = -1.00f;
    this->mPhysMaterialOverride = NULL;
    this->mMaxLinearSpeed = 100.00f;
    this->mMaxLinearAcceleration = 100.00f;
    this->mMinLinearSpeedChange = 100.00f;
    this->mMaxAngularSpeed = 50.00f;
    this->mMaxAngularAcceleration = 80.00f;
    this->mMinAngularSpeedChange = 50.00f;
    this->mVerticalPushOffset = 0.00f;
    this->mNoInputLinearForceMultiplier = 0.50f;
    this->mNoInputAngularForceMultiplier = 0.50f;
    this->bEnableFloorDetection = false;
    this->mFloorCheckSphereRadius = 5.00f;
    this->mFloorCheckVerticalDistance = 50.00f;
    this->bEnableSlopeDetection = false;
    this->mSlopeDetectionVerticalOffset = -75.00f;
    this->mSlopeDetectionDistance = 200.00f;
    this->mSlopeEffectFactor = 0.10f;
    this->bStayUpright = false;
    this->bStayUprightWhenDragged = false;
    this->bDistributeInputForces = true;
    this->mImpulseThersholdForImpact = 150.00f;
    this->mMinAngleForImpact = 75.00f;
    this->mOriginalPhysMaterial = NULL;
}


