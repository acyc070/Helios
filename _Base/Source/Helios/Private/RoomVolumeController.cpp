#include "RoomVolumeController.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"

ARoomVolumeController::ARoomVolumeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BackgroundPPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("BackgroundPPComponent"));
    this->BackgroundMaskPPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("BackgroundMaskPPComponent"));
    this->TargetPPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("TargetPPComponent"));
    this->SourcePPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("SourcePPComponent"));
    this->FadingPPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("FadingPPComponent"));
    this->CustomBlendingPPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("CustomBlendingPPComponent"));
    this->FogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("FogComponent"));
    this->CustomBlendingPPComponent->SetupAttachment(RootComponent);
    this->FadingPPComponent->SetupAttachment(RootComponent);
    this->SourcePPComponent->SetupAttachment(RootComponent);
    this->TargetPPComponent->SetupAttachment(RootComponent);
}


