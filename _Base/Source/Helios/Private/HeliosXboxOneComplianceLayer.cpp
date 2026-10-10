#include "HeliosXboxOneComplianceLayer.h"

UHeliosXboxOneComplianceLayer::UHeliosXboxOneComplianceLayer() {
    this->AllowGuestInterruption = 0;
}

void UHeliosXboxOneComplianceLayer::OnUserLostPromptFadedOut(UHeliosMenuWidget* menuWidget) {
}

void UHeliosXboxOneComplianceLayer::OnUserLostPromptFadedIn(UHeliosMenuWidget* menuWidget) {
}

void UHeliosXboxOneComplianceLayer::OnControllerPromptFadedIn(UHeliosMenuWidget* menuWidget) {
}


