#include "HeliosInteraction.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AHeliosInteraction::AHeliosInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->mInteractionLocation = CreateDefaultSubobject<USceneComponent>(TEXT("InteractionLocation"));
    this->mInteractionTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("TriggerCollider"));
    this->mIsActive = false;
    this->mPawnFilter = 0;
    this->mTimeoutAfterActivation = -1.00f;
    this->mAnimationTimeoutAfterNoPlayerActivity = -1.00f;
    this->mAllowAirborneInteractor = false;
    this->mAllowSlidingInteractor = false;
    this->mUseAbilitySetOverride = false;
    this->mInteractor = NULL;
    this->mInteractionLocation->SetupAttachment(RootComponent);
    this->mInteractionTrigger->SetupAttachment(mInteractionLocation);
}

void AHeliosInteraction::TerminateInteraction(bool success) {
}

void AHeliosInteraction::OnTriggerPrimitiveEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHeliosInteraction::OnTriggerPrimitiveBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}





bool AHeliosInteraction::IsInteractionInProgress() const {
    return false;
}

bool AHeliosInteraction::IsActive() const {
    return false;
}

void AHeliosInteraction::ActivateInteraction(bool onOff) {
}


