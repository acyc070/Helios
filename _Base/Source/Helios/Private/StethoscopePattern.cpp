#include "StethoscopePattern.h"

UStethoscopePattern::UStethoscopePattern() {
    this->mTimeStethoscopeInvestigate = 10.00f;
    this->mVelocityThreshold = 250.00f;
    this->mWeakNoiseReactionTime = 0.50f;
    this->mLoudNoiseReactionTime = 0.20f;
    this->shouldMoveToSpot = false;
    this->mStartAnimActionName = TEXT("StethoscopeStart");
    this->mLoopAnimActionName = TEXT("StethoscopeLoop");
    this->mExitAnimActionName = TEXT("StethoscopeExit");
    this->mReactionAnimActionName = TEXT("StethoscopeReaction");
    this->mStartStethoscopeNotify = TEXT("Notify_StethoscopeOn");
    this->isStethoscopeActive = false;
    this->mSnapYawForBlendspace = 90.00f;
    this->mMovePattern = NULL;
    this->mSthetoscope = NULL;
    this->mStartAnimAction = NULL;
    this->mLoopAnimAction = NULL;
    this->mExitAnimAction = NULL;
}

void UStethoscopePattern::OnNoiseEvent(const FNoiseEvent& NoiseEvent, float EventDistance) {
}

void UStethoscopePattern::OnAnimationNotify(FName Name) {
}


