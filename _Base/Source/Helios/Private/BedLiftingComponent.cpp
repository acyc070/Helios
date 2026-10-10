#include "BedLiftingComponent.h"

UBedLiftingComponent::UBedLiftingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mTiltingSKMcomponentName = TEXT("TiltingSKM");
    this->mBoxComponentName = TEXT("UnderTheBedVolume");
}

void UBedLiftingComponent::OnSmartPointProgress(const FSmartPointProgressEvent& smartPointEvent) {
}


