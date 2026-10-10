#include "AIBaseReactivePattern.h"
#include "Templates/SubclassOf.h"

UAIBaseReactivePattern::UAIBaseReactivePattern() {
    this->mActive = true;
    this->mPriority = EPatternPriority::Default;
    this->mPriorityModifier = 0;
    this->mInterrupter = false;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::No;
    this->mResources = 0;
    this->mBrain = NULL;
    this->mPawnSelf = NULL;
    this->mStatus = EAIActionStatus::Unstarted;
    this->AIChalkboard = NULL;
    this->Animator = NULL;
    this->ControlledPawn = NULL;
    this->Navigator = NULL;
    this->Pawn = NULL;
    this->mLookinator = NULL;
    this->mRootParentPattern = NULL;
    this->mParentPattern = NULL;
    this->mPreviousPatternInSequence = NULL;
    this->mNextPatternInSequence = NULL;
}

void UAIBaseReactivePattern::TriggerCharracterAudioEvent(FCharacterAudioEvent CharacterAudioEvent) {
}

void UAIBaseReactivePattern::TerminateWithDelay(float Delay, bool success) {
}

void UAIBaseReactivePattern::Terminate(bool success) {
}

UAIBaseReactivePattern* UAIBaseReactivePattern::SpawnDynamicReactivePattern(TSubclassOf<UAIBaseReactivePattern> patternClass, const FPatternDelegate& NewOnStop, float Timeout) {
    return NULL;
}

UAIBaseReactivePattern* UAIBaseReactivePattern::SpawnDynamicPattern(TSubclassOf<UAIBaseReactivePattern> patternClass, const FPatternDelegate& NewOnStop, bool independent, bool propagateSuccess, bool propagateFailure, float Timeout, UAIBaseReactivePattern* Previous) {
    return NULL;
}






bool UAIBaseReactivePattern::OnEvaluate_Implementation() const {
    return false;
}

bool UAIBaseReactivePattern::IsPreviousAIAlertState(EAIAlertState State) const {
    return false;
}

bool UAIBaseReactivePattern::IsAIAlertState(EAIAlertState State) const {
    return false;
}

bool UAIBaseReactivePattern::HasRunForAtLeast(float TimeSeconds) const {
    return false;
}

float UAIBaseReactivePattern::GetTimeRunning() const {
    return 0.0f;
}

EAIActionStatus UAIBaseReactivePattern::GetStatus() const {
    return EAIActionStatus::Unstarted;
}

float UAIBaseReactivePattern::GetStartingTime() const {
    return 0.0f;
}

EAIAlertState UAIBaseReactivePattern::GetPreviousAIAlertState() const {
    return EAIAlertState::Idle;
}

EAIAlertState UAIBaseReactivePattern::GetAIAlertState() const {
    return EAIAlertState::Idle;
}

void UAIBaseReactivePattern::AICancelInvestigation() {
}


