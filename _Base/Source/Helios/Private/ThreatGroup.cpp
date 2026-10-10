#include "ThreatGroup.h"

FThreatGroup::FThreatGroup() {
    this->mPawnType = EPawnType::Unspecified;
    this->mThreatLevel = EThreatLevel::NoThreat;
    this->mNumberOfThreats = 0;
    this->mInsideActiveAudioVolume = false;
    this->mDistanceToPlayer = 0.00f;
}

