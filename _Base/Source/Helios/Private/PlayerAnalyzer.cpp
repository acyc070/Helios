#include "PlayerAnalyzer.h"

UPlayerAnalyzer::UPlayerAnalyzer() {
    this->mCheckPlayerCanBeReached = false;
    this->mPathCheckInterval = 1.00f;
    this->mPlayerPawn = NULL;
    this->mSelfEventReceiver = NULL;
}

void UPlayerAnalyzer::OnInworldPawnEvent(const FPawnStateEvent& PawnEvent, float Distance) {
}


