#include "NoiseEvent.h"

FNoiseEvent::FNoiseEvent() {
    this->mInstigator = NULL;
    this->mStrength = ENoiseStrength::Silent;
    this->mTags = 0;
}

