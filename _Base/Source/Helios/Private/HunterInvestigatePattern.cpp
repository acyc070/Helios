#include "HunterInvestigatePattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UHunterInvestigatePattern::UHunterInvestigatePattern() {
    this->mPriority = EPatternPriority::Reaction;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
    this->mMaxReactDistance = 1500.00f;
    this->mReactionDelay = 0.20f;
    this->mBlendspaceToPlay = NULL;
    this->mMaxTimeout = 10.00f;
}

void UHunterInvestigatePattern::OnShotFired() {
}

void UHunterInvestigatePattern::OnBlendspaceDone(FName Name) {
}


