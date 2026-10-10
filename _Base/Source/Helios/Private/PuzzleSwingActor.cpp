#include "PuzzleSwingActor.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GrabHelper.h"
#include "HangableComponent.h"

APuzzleSwingActor::APuzzleSwingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HangableRoot"));
    this->mDroppingDistance = 10.00f;
    this->isDroppingOnHanging = true;
    this->mDroppingSpeed = 0.80f;
    this->mRisingSpeed = 0.80f;
    this->doBackToPositionOnRelease = false;
    this->mInitialProgress = 0.00f;
    this->mRootComponent = (USceneComponent*)RootComponent;
    this->mBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->mConstrainComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("RopeConstrains"));
    this->mHangableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HangableMesh"));
    this->mHangableComponent = CreateDefaultSubobject<UHangableComponent>(TEXT("HangableComponent"));
    this->mGrabHelper = CreateDefaultSubobject<UGrabHelper>(TEXT("GrabHelper"));
    this->mBaseMesh->SetupAttachment(RootComponent);
    this->mConstrainComponent->SetupAttachment(mBaseMesh);
    this->mGrabHelper->SetupAttachment(mHangableComponent);
    this->mHangableComponent->SetupAttachment(mHangableMesh);
    this->mHangableMesh->SetupAttachment(RootComponent);
}

void APuzzleSwingActor::OnHangableComponentStartGrab(UHangableComponent* hangable, const UBaseGrabberInterface* grabber) {
}

void APuzzleSwingActor::OnHangableComponentEndGrab(UHangableComponent* hangable, const UBaseGrabberInterface* grabber) {
}


