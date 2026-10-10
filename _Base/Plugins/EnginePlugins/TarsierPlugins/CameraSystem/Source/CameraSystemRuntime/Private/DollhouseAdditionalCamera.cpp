#include "DollhouseAdditionalCamera.h"
#include "Components/SceneComponent.h"
#include "TarEditableVolumeComponent.h"
#include "DollhouseCameraComponent.h"

ADollhouseAdditionalCamera::ADollhouseAdditionalCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->mUseFollowRotation = true;
    this->mCameraComponent = CreateDefaultSubobject<UDollhouseCameraComponent>(TEXT("CameraComponent"));
    this->mEditableCameraVolume = CreateDefaultSubobject<UTarEditableVolumeComponent>(TEXT("EditableCameraVolume"));
    this->mEnabled = true;
    this->mCameraComponent->SetupAttachment(RootComponent);
    this->mEditableCameraVolume->SetupAttachment(RootComponent);
}

void ADollhouseAdditionalCamera::SetFollowScaleOverTime(float Target, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}


