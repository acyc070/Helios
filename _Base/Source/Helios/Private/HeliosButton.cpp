#include "HeliosButton.h"

UHeliosButton::UHeliosButton() {
    this->mFadeTime = 0.12f;
    this->mMinScale = 1.00f;
    this->mMaxScale = 1.10f;
    this->mPressedScale = 0.95f;
    this->mPressedFadeTime = 0.12f;
    this->mMinOpacity = 0.50f;
    this->mMaxOpacity = 1.00f;
    this->mShouldPlayClickSound = true;
}

void UHeliosButton::SetMinOpacity(float minOpacity) {
}

void UHeliosButton::SetMaxOpacity(float maxOpacity) {
}

void UHeliosButton::ResetOnCachedEvent() {
}

void UHeliosButton::Released() {
}

void UHeliosButton::Pressed() {
}

void UHeliosButton::Clicked() {
}


