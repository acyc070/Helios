#include "HeliosLayerWidget.h"

UHeliosLayerWidget::UHeliosLayerWidget() {
    this->mQueuedMenu = NULL;
}

int32 UHeliosLayerWidget::WidgetCount() const {
    return 0;
}

void UHeliosLayerWidget::PushMenuWidget(UHeliosMenuWidget* Widget) {
}

UHeliosMenuWidget* UHeliosLayerWidget::PopMenuWidget(UObject* InWorld, bool ForcePop) {
    return NULL;
}

void UHeliosLayerWidget::OnMenuFadedOutDuringPush(UHeliosMenuWidget* menuWidget) {
}

void UHeliosLayerWidget::OnMenuFadedOutDuringPop(UHeliosMenuWidget* menuWidget) {
}

void UHeliosLayerWidget::OnMenuFadedIn(UHeliosMenuWidget* menuWidget) {
}

void UHeliosLayerWidget::OnCultureChanged() {
}

UHeliosMenuWidget* UHeliosLayerWidget::GetWidgetAt(int32 Index) const {
    return NULL;
}

UHeliosMenuWidget* UHeliosLayerWidget::CreateMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate) {
    return NULL;
}

UHeliosMenuWidget* UHeliosLayerWidget::CreateAndPushMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate) {
    return NULL;
}


