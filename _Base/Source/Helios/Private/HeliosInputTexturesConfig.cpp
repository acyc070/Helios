#include "HeliosInputTexturesConfig.h"

UHeliosInputTexturesConfig::UHeliosInputTexturesConfig() {
    this->InputType = EHeliosInputType::KeyboardAndMouse;
    this->DefaultTexture = NULL;
}

UHeliosInputTexturesConfig* UHeliosInputTexturesConfig::GetPlatformSpecificTextureConfig(EHeliosInputType NewInputType) {
    return NULL;
}

UTexture2D* UHeliosInputTexturesConfig::GetNamedTexture(const FName& Name) const {
    return NULL;
}

UTexture2D* UHeliosInputTexturesConfig::GetKeyTexture(const FKey& Key) const {
    return NULL;
}


