#include "PuzzleTVActor.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GrabHelper.h"
#include "UsableObjectReceiver.h"

APuzzleTVActor::APuzzleTVActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mInitialTVState = ETVState::TVState_Off;
    this->mLinkID = TEXT("5F6FE77B43");
    this->canBeTurnedOn = true;
    this->canPushTV = false;
    this->bBreakTVOnExit = false;
    this->mProximityRadius = 250.00f;
    this->mMaxTimeTouchingScreen = 2.00f;
    this->mMaxTimeRemoteInteracting = 2.00f;
    this->mMaterialIndex = 0;
    this->mMaterialTextureParam = TEXT("Texture");
    this->mOnIndicatorMaterial = NULL;
    this->mOnMasterSlaveMaterial = NULL;
    this->mOffMasterSlaveMaterial = NULL;
    this->mIndicatorLight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mIndicatorLight"));
    this->mMasterLight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mMasterLight"));
    this->mSlaveLight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mSlaveLight"));
    this->mPushPanelGrabHelperScreen = CreateDefaultSubobject<UGrabHelper>(TEXT("mPushPanelGrabHelperScreen"));
    this->mPushPanelGrabHelperLeft = CreateDefaultSubobject<UGrabHelper>(TEXT("mPushPanelGrabHelperLeft"));
    this->mPushPanelGrabHelperRight = CreateDefaultSubobject<UGrabHelper>(TEXT("mPushPanelGrabHelperRight"));
    this->mPushPanelGrabHelperBack = CreateDefaultSubobject<UGrabHelper>(TEXT("mPushPanelGrabHelperBack"));
    this->mScreenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mScreenMesh"));
    this->mScreenDestructibleMesh = NULL;
    this->mTeleportationDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("mTeleportationDirection"));
    this->mTeleportationTargetLocation = CreateDefaultSubobject<USceneComponent>(TEXT("mTeleportationTargetLocation"));
    this->mAKTVAudio = CreateDefaultSubobject<UAkComponent>(TEXT("mAKTVAudio"));
    this->mTVSpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("mSpotLight"));
    this->mRemoteReceiver = CreateDefaultSubobject<UUsableObjectReceiver>(TEXT("mRemoteReceiver"));
    this->mScreenCenterLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("mScreenCenterLocation"));
    this->mEnableTeleportBetweenPersistentLevels = false;
    this->mTeleportingPawn = NULL;
    this->mScreenDynamicMaterialInstance = NULL;
    this->mAKTVAudio->SetupAttachment(RootComponent);
    this->mIndicatorLight->SetupAttachment(RootComponent);
    this->mMasterLight->SetupAttachment(RootComponent);
    this->mPushPanelGrabHelperBack->SetupAttachment(RootComponent);
    this->mPushPanelGrabHelperLeft->SetupAttachment(RootComponent);
    this->mPushPanelGrabHelperRight->SetupAttachment(RootComponent);
    this->mPushPanelGrabHelperScreen->SetupAttachment(RootComponent);
    this->mScreenCenterLocation->SetupAttachment(RootComponent);
    this->mScreenMesh->SetupAttachment(RootComponent);
    this->mSlaveLight->SetupAttachment(RootComponent);
    this->mTVSpotLight->SetupAttachment(RootComponent);
    this->mTeleportationDirection->SetupAttachment(mTeleportationTargetLocation);
    this->mTeleportationTargetLocation->SetupAttachment(RootComponent);
}

void APuzzleTVActor::TeleportToTVBP(APuzzleTVActor* otherTV) {
}

void APuzzleTVActor::TeleportThroughPortalBP() {
}

void APuzzleTVActor::StopPushingTV() {
}

void APuzzleTVActor::StartPushingTV(AActor* interactingActor) {
}

void APuzzleTVActor::SetTVChannelBP(const FTVChannelReference& newTVChannel) {
}

void APuzzleTVActor::SetStateBP(ETVState NewState) {
}
















void APuzzleTVActor::OnRemoteInteractionUpdate(FName Event, bool MainTarget, bool testParam) {
}

void APuzzleTVActor::OnRemoteInteractionStart(AActor* remoteActor) {
}

void APuzzleTVActor::OnRemoteInteractionEnd(AActor* remoteActor) {
}

bool APuzzleTVActor::IsPortalOpenBP() const {
    return false;
}

void APuzzleTVActor::InteractWithTVBP() {
}

ETVState APuzzleTVActor::GetTVState() const {
    return ETVState::TVState_Off;
}

TArray<APuzzleTVActor*> APuzzleTVActor::GetTVPuzzlePiecesInMyNetworkBP() const {
    return TArray<APuzzleTVActor*>();
}

FTVChannelsData APuzzleTVActor::GetTVChannelBP() const {
    return FTVChannelsData{};
}

AControlledPawn* APuzzleTVActor::GetTeleportingPawn() const {
    return NULL;
}


UMaterialInstanceDynamic* APuzzleTVActor::GetScreenMaterialInstanceDynamic() const {
    return NULL;
}



