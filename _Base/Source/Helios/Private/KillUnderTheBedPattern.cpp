#include "KillUnderTheBedPattern.h"

UKillUnderTheBedPattern::UKillUnderTheBedPattern() {
    this->mTargetKillAnimNotify = TEXT("Notify_KillTarget");
    this->mTargetGrabKillNotify = TEXT("Notify_GrabPlayer");
    this->mDefaultAttachPoint = EAttachPoint::LeftHand;
    this->mGrabActorComponent = NULL;
    this->mTargetCPawn = NULL;
}




void UKillUnderTheBedPattern::OnAnimationNotify(FName Name) {
}


