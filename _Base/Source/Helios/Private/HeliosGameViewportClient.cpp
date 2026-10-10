#include "HeliosGameViewportClient.h"

UHeliosGameViewportClient::UHeliosGameViewportClient() {
}

void UHeliosGameViewportClient::SetInputScheme(const EHeliosInputScheme& InScheme) {
}

void UHeliosGameViewportClient::SetIgnoreFocusChange(bool ignoreFocusChange) {
}

UHeliosGameViewportClient* UHeliosGameViewportClient::GetHeliosViewport(const UObject* InWorld) {
    return NULL;
}

EHeliosInputType UHeliosGameViewportClient::CurrentInputTypeAndScheme(EHeliosInputScheme& scheme) {
    return EHeliosInputType::KeyboardAndMouse;
}

EHeliosInputType UHeliosGameViewportClient::CurrentInputType() const {
    return EHeliosInputType::KeyboardAndMouse;
}


