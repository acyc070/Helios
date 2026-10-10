#include "OcclusionValues.h"

FOcclusionValues::FOcclusionValues() {
    this->mOutsideOcclusionVol = 0.00f;
    this->mOutsideOcclusionLPF = 0.00f;
    this->mInsideOcclusionVol = 0.00f;
    this->mInsideOcclusionLPF = 0.00f;
    this->mReverbOcclusion = 0.00f;
    this->mUseReverbOcclusion = false;
    this->mOcclusionFadeRate = 0.00f;
}

