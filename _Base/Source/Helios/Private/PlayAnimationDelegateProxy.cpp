#include "PlayAnimationDelegateProxy.h"

UPlayAnimationDelegateProxy::UPlayAnimationDelegateProxy() {
    this->mAbilitySetToApply = NULL;
}

void UPlayAnimationDelegateProxy::OnWorldReloaded(UWorld* World) {
}

void UPlayAnimationDelegateProxy::AnimationInterrupted(FName Name) {
}

void UPlayAnimationDelegateProxy::AnimationFinished(FName Name) {
}


