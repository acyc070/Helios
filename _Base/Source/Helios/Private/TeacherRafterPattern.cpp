#include "TeacherRafterPattern.h"

UTeacherRafterPattern::UTeacherRafterPattern() {
    this->mNotifyKill = TEXT("Notify_KillPlayer");
    this->mNotifyPlayerGotAway = TEXT("Notify_PlayerGotAway");
    this->bIsAlerted = false;
    this->bTargetGrabbed = false;
    this->mCurrentAnimationIndex = 0;
    this->mTimeSinceLastInvestigate = 0.00f;
    this->mGrabComponent = NULL;
    this->mAnimationListener = NULL;
    this->mNoiseSensor = NULL;
    this->mAttackSmartPoint = NULL;
    this->mPreviousAnimPattern = NULL;
}


void UTeacherRafterPattern::OnAnimNotifyTargetKill(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UTeacherRafterPattern::OnAnimNotifyPlayerGotAway(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}


