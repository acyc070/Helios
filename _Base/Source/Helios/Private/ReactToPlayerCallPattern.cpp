#include "ReactToPlayerCallPattern.h"
#include "EAIPatternEventDrivenEvaluation.h"
#include "EPatternPriority.h"

UReactToPlayerCallPattern::UReactToPlayerCallPattern() {
    this->mPriority = EPatternPriority::Cooperation;
    this->mInterrupter = true;
    this->mEventDrivenEvaluation = EAIPatternEventDrivenEvaluation::WhileValueIsValidOrTrue;
    this->mReactionRadius = 300.00f;
    this->mReactionDelay = 0.30f;
    this->mMaxTimeSinceCall = 1.00f;
    this->mPlayerPawn = NULL;
}


