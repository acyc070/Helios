#include "ControllerDetectionWidget.h"

UControllerDetectionWidget::UControllerDetectionWidget() {
    this->bLostControllerMenu = false;
    this->bLostUserMenu = false;
    this->AssignedControllerId = -1;
    this->bAllowUserChange = true;
    this->bAllowCancelButton = true;
    this->bWaitingForQuitConfirmation = false;
    this->bShowAccountPickerPressed = false;
}

void UControllerDetectionWidget::ShutdownWidget() {
}



FEventReply UControllerDetectionWidget::HandleKeyDown(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

void UControllerDetectionWidget::ClearLocalUserID() {
}

bool UControllerDetectionWidget::AllowMouseOrKeyboardToContinue_Implementation() {
    return false;
}


