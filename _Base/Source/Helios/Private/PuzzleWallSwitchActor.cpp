#include "PuzzleWallSwitchActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GrabHelper.h"
#include "HangableComponent.h"

APuzzleWallSwitchActor::APuzzleWallSwitchActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PuzzlePieceRoot"));
    this->mInitialProgress = 0.00f;
    this->mDroppingSpeed = 0.00f;
    this->doBackToPositionOnRelease = false;
    this->mRootSceneComponent = (USceneComponent*)RootComponent;
    this->mBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->mSwitchMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HangableMesh"));
    this->mHangableComponent = CreateDefaultSubobject<UHangableComponent>(TEXT("HangableComponent"));
    this->mGrabHelper = CreateDefaultSubobject<UGrabHelper>(TEXT("GrabHelper"));
    this->mUserFlowControlComponent = NULL;
    this->mBaseMesh->SetupAttachment(RootComponent);
    this->mGrabHelper->SetupAttachment(mHangableComponent);
    this->mHangableComponent->SetupAttachment(mSwitchMesh);
    this->mSwitchMesh->SetupAttachment(RootComponent);
}

void APuzzleWallSwitchActor::OnHangableComponentStartGrab(UHangableComponent* hangable, const UBaseGrabberInterface* grabber) {
}

void APuzzleWallSwitchActor::OnHangableComponentEndGrab(UHangableComponent* hangable, const UBaseGrabberInterface* grabber) {
}


