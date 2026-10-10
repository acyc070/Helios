#include "PhysicalReactionComponent.h"

UPhysicalReactionComponent::UPhysicalReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mMovementMode = EMovementRestriction::RootMotionOnly;
    this->mFlowControl = NULL;
    this->mAnimSetup = NULL;
    this->mAnimOverride = NULL;
    this->mAnimListener = NULL;
}

void UPhysicalReactionComponent::OnPhysicalReactionStarted(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UPhysicalReactionComponent::OnPhysicalReactionFinished(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}


