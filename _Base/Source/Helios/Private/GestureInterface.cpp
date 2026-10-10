#include "GestureInterface.h"

UGestureInterface::UGestureInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mFlowControlComponent = NULL;
    this->mGestureTargetClass = NULL;
    this->mGestureBackToNormalCooldown = 3.00f;
}

void UGestureInterface::TryStartGesturing() {
}

void UGestureInterface::StopGesturing() {
}

void UGestureInterface::SetGestureOverrider(TScriptInterface<IGestureOverrideInterface> overrider) {
}

void UGestureInterface::OnAnimationStateFinished(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UGestureInterface::ClearGestureOverrider(TScriptInterface<IGestureOverrideInterface> overrider) {
}


