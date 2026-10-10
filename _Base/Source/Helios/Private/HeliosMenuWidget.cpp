#include "HeliosMenuWidget.h"

UHeliosMenuWidget::UHeliosMenuWidget() {
    this->mFadeTime = 0.15f;
    this->mShowMouseCursor = true;
    this->mShouldPlayBackSound = true;
    this->mForceFocusOnButtonPanel = true;
    this->mFlowDirection = EMenuFlowDirection::Vertical;
    this->ButtonPanel = NULL;
    this->mLayerWidget = NULL;
}

void UHeliosMenuWidget::OnStartFadingIn(UHeliosMenuWidget* Widget) {
}



void UHeliosMenuWidget::OnMenuPushed_Implementation() {
}

void UHeliosMenuWidget::OnMenuPopped_Implementation() {
}

void UHeliosMenuWidget::OnInputTypeChanged(EHeliosInputType newInputType, EHeliosInputScheme newInputScheme) {
}

void UHeliosMenuWidget::OnFadedIn(UHeliosMenuWidget* Widget) {
}

void UHeliosMenuWidget::OnClickedBack_Implementation(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) {
}


UHeliosLayerWidget* UHeliosMenuWidget::GetLayerWidget() const {
    return NULL;
}

EMenuFadeState UHeliosMenuWidget::GetFadeState() {
    return EMenuFadeState::Idle;
}

UWidget* UHeliosMenuWidget::GetCurrentFocusedWidget() const {
    return NULL;
}


