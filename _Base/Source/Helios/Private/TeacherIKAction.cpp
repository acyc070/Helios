#include "TeacherIKAction.h"

UTeacherIKAction::UTeacherIKAction() {
    this->mNotifyStart = TEXT("Notify_NeckAttack");
    this->mNotifyEnd = TEXT("Notify_KillPlayer");
    this->mIKIDTask = EIKTaskIdentifier::IK_TARGET_INVALID;
    this->mTargetComponent = NULL;
    this->mCloseDistanceGrab = 0.00f;
    this->mCharacterIKComponent = NULL;
    this->mAnimationListener = NULL;
}

void UTeacherIKAction::SetStaticSpline(const USplineComponent* staticSpline) {
}

void UTeacherIKAction::OnAnimNotifyStart(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UTeacherIKAction::OnAnimNotifyEnd(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}


