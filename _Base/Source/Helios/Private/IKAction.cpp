#include "IKAction.h"

UIKAction::UIKAction() {
    this->mUseCurve = false;
    this->mEnableTranslation = true;
    this->mEnableRotation = false;
    this->mBlendWeight = 1.00f;
    this->mBlendTime = 1.00f;
    this->mOutBlendTime = 0.20f;
    this->mIKIDTask = EIKTaskIdentifier::IK_TARGET_INVALID;
    this->mTargetComponent = NULL;
    this->mCharacterIKComponent = NULL;
    this->mAnimationListener = NULL;
}

void UIKAction::OnAnimNotifyStart(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}

void UIKAction::OnAnimNotifyEnd(AActor* notifier, const FName& NotifyName, const TArray<UAnimMetaData*>& AnimMetaData) {
}


