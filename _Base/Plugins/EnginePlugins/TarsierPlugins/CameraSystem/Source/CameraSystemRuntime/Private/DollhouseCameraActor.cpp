#include "DollhouseCameraActor.h"
#include "Components/SceneComponent.h"
#include "TarEditableVolumeComponent.h"
#include "DollhouseCameraComponent.h"

ADollhouseCameraActor::ADollhouseCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mCameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRoot"));
    this->mCameraComponent = CreateDefaultSubobject<UDollhouseCameraComponent>(TEXT("CameraComponent"));
    this->mEditableCameraVolume = CreateDefaultSubobject<UTarEditableVolumeComponent>(TEXT("EditableCameraVolume"));
    this->mUseFollowRotation = true;
    this->mCurrentViewValue = -1.00f;
    this->mCameraComponent->SetupAttachment(mCameraRoot);
    this->mCameraRoot->SetupAttachment(RootComponent);
    this->mEditableCameraVolume->SetupAttachment(mCameraRoot);
}

void ADollhouseCameraActor::SetFollowScaleOverTime(float Target, float TimeSeconds, TEnumAsByte<EEasingFunc::Type> easingFunction) {
}

void ADollhouseCameraActor::AdjustCameraVolume() {
}


