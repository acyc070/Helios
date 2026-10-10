#include "GrabAnalyzer.h"

UGrabAnalyzer::UGrabAnalyzer() {
    this->mOverrideGrabChannel = ECC_MAX;
    this->mRefreshGrabStartNotify = TEXT("RefreshGrabStart_Notify");
    this->UsePrediction = true;
    this->UseAbort = false;
    this->UseRaycast = true;
    this->AbortRadiusMultiplayer = 1.50f;
    this->ForwardGrabOffset = 0.00f;
    this->mTarget = NULL;
}

void UGrabAnalyzer::OnGrabStarted(float Timestamp) {
}

void UGrabAnalyzer::OnGrabIntentChanged(bool newIntent) {
}

void UGrabAnalyzer::NotifyHit(const FFlowControlAnimNotifyData& AnimNotify) {
}


