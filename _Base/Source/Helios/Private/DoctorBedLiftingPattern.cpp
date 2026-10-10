#include "DoctorBedLiftingPattern.h"
#include "EPatternPriority.h"

UDoctorBedLiftingPattern::UDoctorBedLiftingPattern() {
    this->mPriority = EPatternPriority::Override;
    this->mBedAnimInstance = NULL;
    this->mPawnAnimInstance = NULL;
}

void UDoctorBedLiftingPattern::OnTargetGrabbed(EAttachPoint attachPoint, AActor* Target) {
}

void UDoctorBedLiftingPattern::NotifyHit(const FFlowControlAnimNotifyData& AnimNotify) {
}


