#include "PlaypalOutOfBoundsManager.h"

UPlaypalOutOfBoundsManager::UPlaypalOutOfBoundsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mUseTeleportBounds = true;
    this->mUseRecentlyRendered = true;
    this->mRecentlyRenderedTolerance = 1.00f;
    this->mSearchRadius = 500.00f;
    this->mMaxSearchIterations = 8;
    this->mShowDebugInfo = false;
}

void UPlaypalOutOfBoundsManager::TryRespawningPlayer_Blueprint(EPlaypalRespawnResult& Result) {
}

void UPlaypalOutOfBoundsManager::OnPlaypalPawnEvent(const FGenericGameEvent& gameEvent) {
}


