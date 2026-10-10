#include "AIPuzzleInteraction.h"

UAIPuzzleInteraction::UAIPuzzleInteraction() {
    this->mPuzzlePiece = NULL;
    this->mHackProgress = true;
    this->mUseGrabAction = false;
    this->mUseAbilitySetOverride = false;
}

void UAIPuzzleInteraction::NotifyGrabComplete(const FFlowControlAnimNotifyData& AnimNotify) {
}

void UAIPuzzleInteraction::InterpolationCompleted(float finalProgress) {
}

void UAIPuzzleInteraction::CalculateInteractionLocation_Implementation(FVector& OutLocation, FVector& outForward) {
}


