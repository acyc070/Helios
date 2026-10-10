#include "WidgetManager.h"

UWidgetManager::UWidgetManager() {
}

void UWidgetManager::WidgetLayerMenuPushed(UHeliosMenuWidget* menuWidget) {
}

void UWidgetManager::WidgetLayerMenuPopped(UHeliosMenuWidget* menuWidget) {
}

void UWidgetManager::ShowHintWidget(UObject* InWorld, FText HintText, float DisplayTime) {
}

UHeliosMenuWidget* UWidgetManager::SetBackgroundWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate) {
    return NULL;
}

void UWidgetManager::PushMenuWidget(UHeliosMenuWidget* menuWidget) {
}

void UWidgetManager::PopMenuWidget(UObject* InWorld) {
}

void UWidgetManager::PopAllMenuWidgets(UObject* InWorld) {
}

void UWidgetManager::HideTargetHintWidget(UObject* InWorld, FText hintToHide) {
}

void UWidgetManager::HideHintWidget(UObject* InWorld) {
}

UHeliosMenuWidget* UWidgetManager::CreateMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate) {
    return NULL;
}

UHeliosMenuWidget* UWidgetManager::CreateAndPushMenuWidget(UObject* InWorld, TSoftClassPtr<UHeliosMenuWidget> menuWidgetTemplate) {
    return NULL;
}

void UWidgetManager::ClearBackgroundWidget(UObject* InWorld) {
}


