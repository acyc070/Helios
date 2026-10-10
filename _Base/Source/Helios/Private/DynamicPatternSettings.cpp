#include "DynamicPatternSettings.h"

FDynamicPatternSettings::FDynamicPatternSettings() {
    this->mIndependent = false;
    this->mPropagateSuccess = false;
    this->mPropagateFailure = false;
    this->mTimeout = 0.00f;
}

