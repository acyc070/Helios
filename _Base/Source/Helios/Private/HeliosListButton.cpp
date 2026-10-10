#include "HeliosListButton.h"

UHeliosListButton::UHeliosListButton() {
    this->mIsFocusable = true;
    this->mItemMarginLeft = 0.00f;
    this->mItemMarginRight = 30.00f;
    this->mValue = 0;
    this->mCanClickOptions = false;
    this->mHorizontalTextAlignment = HAlign_Fill;
    this->mVerticalTextAlignment = VAlign_Fill;
}

void UHeliosListButton::SetValueSilent(int32 Value) {
}

void UHeliosListButton::SetValue(int32 Value) {
}

void UHeliosListButton::SetOptions(const TArray<FText>& Options) {
}

void UHeliosListButton::SetItemMargin(float marginLeft, float marginRight) {
}

void UHeliosListButton::SetCanClickOptions(bool canClickOptions) {
}

int32 UHeliosListButton::GetValue() {
    return 0;
}

TArray<FText> UHeliosListButton::GetOptions() {
    return TArray<FText>();
}


