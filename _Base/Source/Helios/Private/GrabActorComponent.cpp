#include "GrabActorComponent.h"

UGrabActorComponent::UGrabActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mAnimationStartNotify = TEXT("Notify_AttackStarted");
    this->mTarget = NULL;
    this->mFlowControl = NULL;
    this->mCarryComponent = NULL;
}

void UGrabActorComponent::StopListeningToGrabs() {
}

void UGrabActorComponent::RemoveListenToAttachPoint(EAttachPoint attachPoint) {
}

void UGrabActorComponent::NotifyHit(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UGrabActorComponent::ListenForGrab(AActor* Target) {
}

void UGrabActorComponent::AddListenToAttachPoint(EAttachPoint attachPoint, AActor* Target) {
}


