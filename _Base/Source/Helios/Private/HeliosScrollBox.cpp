#include "HeliosScrollBox.h"

UHeliosScrollBox::UHeliosScrollBox() {
    this->EnableScrollingWithGamepad = true;
    this->GamepadScrollAcceleration = 80.00f;
    this->GamepadScrollMaxSpeed = 15.00f;
    this->GamepadScrollDamping = 0.10f;
    this->GamepadStickDeadZone = 0.00f;
    this->RequireFocusToScroll = false;
    this->EndOfScrollThreshold = 0.05f;
    this->bUseCustomTextFormat = false;
    this->CustomFormatReader = ETextReaderType::XMLReader;
    this->ArabicLineHeightPercentage = 1.00f;
    this->CustomFontSize = 42;
    this->BulletFontSize = 42;
    this->BulletStepSize = 10;
    this->UseLegalFont = false;
    this->WrapTextPadding = 0.00f;
    this->DebugForceAdditionalPaddingForArabic = false;
    this->AdditionalPaddingForArabic = false;
    this->TextReader = NULL;
}

void UHeliosScrollBox::Tick(float DeltaTime) {
}

bool UHeliosScrollBox::HasReachedEnd() const {
    return false;
}


