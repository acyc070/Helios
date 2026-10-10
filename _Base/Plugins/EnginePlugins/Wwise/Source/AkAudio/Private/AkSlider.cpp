#include "AkSlider.h"

UAkSlider::UAkSlider() {
    this->Value = 0.00f;
    this->Orientation = Orient_Horizontal;
    this->IndentHandle = false;
    this->Locked = false;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
}

void UAkSlider::SetValue(float inValue) {
}

void UAkSlider::SetStepSize(float inValue) {
}

void UAkSlider::SetSliderHandleColor(FLinearColor inValue) {
}

void UAkSlider::SetSliderBarColor(FLinearColor inValue) {
}

void UAkSlider::SetLocked(bool inValue) {
}

void UAkSlider::SetIndentHandle(bool inValue) {
}

void UAkSlider::SetAkSliderItemProperty(const FString& ItemProperty) {
}

void UAkSlider::SetAkSliderItemId(const FGuid& ItemId) {
}

float UAkSlider::GetValue() const {
    return 0.0f;
}

FString UAkSlider::GetAkSliderItemProperty() const {
    return TEXT("");
}

FGuid UAkSlider::GetAkSliderItemId() const {
    return FGuid{};
}


