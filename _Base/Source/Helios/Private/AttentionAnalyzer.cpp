#include "AttentionAnalyzer.h"

UAttentionAnalyzer::UAttentionAnalyzer() {
    this->mPrimaryAttentionTarget = NULL;
}

void UAttentionAnalyzer::OnPrimaryAttentionTargetDestroyed(AActor* DestroyedActor) {
}

void UAttentionAnalyzer::OnAttentionEvent(const FGenericGameEvent& gameEvent) {
}


