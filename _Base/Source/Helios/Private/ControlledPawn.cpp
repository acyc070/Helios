#include "ControlledPawn.h"
#include "TarAnimationListenerComponent.h"
#include "PhysicsAudioComponent.h"
#include "AnimationControlComponent.h"
#include "AnimationOverrideComponent.h"
#include "AnimationSetupComponent.h"
#include "CharacterIKControllerComponent.h"
#include "FlowControlComponent.h"
#include "HealthAndDamageComponent.h"
#include "LocomotionComponent2.h"
#include "PawnPropertiesComponent.h"
#include "WorldEventReceiver.h"

AControlledPawn::AControlledPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<ULocomotionComponent2>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->mCharacterChalkboard = NULL;
    this->mPawnProperties = CreateDefaultSubobject<UPawnPropertiesComponent>(TEXT("PawnProperties"));
    this->mWorldEventReceiver = CreateDefaultSubobject<UWorldEventReceiver>(TEXT("WorldEventReceiver"));
    this->mHealthDamageComponent = CreateDefaultSubobject<UHealthAndDamageComponent>(TEXT("HealthAndDamageComponent"));
    this->mCeilingMarginForCapsule = 30.00f;
    this->mAllowsFloatingMesh = true;
    this->mMeshFloatLerpSpeed = 20.00f;
    this->mAnimationControlComponent = CreateDefaultSubobject<UAnimationControlComponent>(TEXT("AnimationControlComponent"));
    this->mAnimationSetupComponent = CreateDefaultSubobject<UAnimationSetupComponent>(TEXT("AnimationSetupComponent"));
    this->mFlowControlComponent = CreateDefaultSubobject<UFlowControlComponent>(TEXT("FlowControlComponent"));
    this->mAnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListenerComponent"));
    this->mAnimationOverrideComponent = CreateDefaultSubobject<UAnimationOverrideComponent>(TEXT("AnimationOverrideComponent"));
    this->mIKControllerComponent = CreateDefaultSubobject<UCharacterIKControllerComponent>(TEXT("IKControllerComponent"));
    this->mAudioComponent = CreateDefaultSubobject<UPhysicsAudioComponent>(TEXT("AudioComponent"));
    this->mCachedInventoryComponent = NULL;
    this->mCachedPlayerPickupInterface = NULL;
    this->mCachedFlashlightCombatComponent = NULL;
    this->mMeshComponent = NULL;
    this->mDefaultPawn = NULL;
    this->mDefaultMeshComponent = NULL;
    this->mAudioComponent->SetupAttachment(RootComponent);
}

void AControlledPawn::TriggerCharacterAudioEvent(const FCharacterAudioEvent& AudioEvent) {
}


void AControlledPawn::OverrideAIAlertState(EAIAlertState State) {
}




bool AControlledPawn::MatchesPawnTypeMask(int32 Mask) const {
    return false;
}

bool AControlledPawn::IsPreviousAIAlertState(EAIAlertState State) const {
    return false;
}

bool AControlledPawn::IsPlayer() const {
    return false;
}

bool AControlledPawn::IsAlive() const {
    return false;
}

bool AControlledPawn::IsAIAlertState(EAIAlertState State) const {
    return false;
}

bool AControlledPawn::HasCharacteristic(EObjectCharacteristics characteristic) const {
    return false;
}

UChalkboardWrapper* AControlledPawn::GetPublicInfoChalkboardWrapper() const {
    return NULL;
}

EAIAlertState AControlledPawn::GetPreviousAIAlertState() const {
    return EAIAlertState::Idle;
}

UPlayerPickupInterface* AControlledPawn::GetPlayerPickupInterface() const {
    return NULL;
}

EPawnType AControlledPawn::GetPawnType() const {
    return EPawnType::Unspecified;
}

ULocomotionComponent2* AControlledPawn::GetLocomotionComponent() const {
    return NULL;
}

FVector AControlledPawn::GetLocationOfDangerousPart_Implementation() const {
    return FVector{};
}

UInventoryComponent* AControlledPawn::GetInventoryComponent() const {
    return NULL;
}

UFlashlightCombatComponent* AControlledPawn::GetFlashlightCombatComponent() const {
    return NULL;
}

UChalkboardWrapper* AControlledPawn::GetCharacterChalkboardWrapper() const {
    return NULL;
}

UChalkboardWrapper* AControlledPawn::GetAIChalkboardWrapper() const {
    return NULL;
}

EAIAlertState AControlledPawn::GetAIAlertState() const {
    return EAIAlertState::Idle;
}

FVector AControlledPawn::GetActorFeetLocation() const {
    return FVector{};
}

void AControlledPawn::DetectionOnDemand(FVector Location, AActor* Actor, EOnDemandDetectionType detectionType) {
}



void AControlledPawn::AlignToTransform(const FTransform& Transform, float Duration, ESmoothAlignmentSettings Settings, bool OverrideMovement, bool AllowZMovement) {
}

void AControlledPawn::AICancelInvestigation() {
}


