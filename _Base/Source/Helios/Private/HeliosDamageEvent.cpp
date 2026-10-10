#include "HeliosDamageEvent.h"

FHeliosDamageEvent::FHeliosDamageEvent() {
    this->mDamageType = EDamageType::Unspecified;
    this->mDamageSourceType = EDamageSourceType::Unspecified;
    this->mAmount = 0.00f;
    this->mDirectCause = NULL;
    this->mInstigator = NULL;
}

