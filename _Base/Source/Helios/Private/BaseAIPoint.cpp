#include "BaseAIPoint.h"

UBaseAIPoint::UBaseAIPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mIsEnabled = true;
    this->mPriority = 1.00f;
    this->mPawnFilter = 0;
    this->mClassFilter = NULL;
    this->mSpawnerFilter = NULL;
    this->mInterruptBehaviorsWhenDisabled = false;
    this->mInterruptMovementWhenDisabled = true;
    this->mUseActivationTrigger = false;
    this->mBlueprintConditionalsForTrigger = NULL;
    this->mUseTriggerForDeactivation = false;
    this->mActivationTrigger = NULL;
    this->mClassToRegister = NULL;
    this->mActorThatActivatedSP = NULL;
    this->mSavableChalkboardComponent = NULL;
}

void UBaseAIPoint::ToggleActivationTrigger(bool onOff) {
}

void UBaseAIPoint::SetPriorityMultiplier(const float Priority) {
}

void UBaseAIPoint::SetEnabled(bool Enabled, float Delay) {
}

void UBaseAIPoint::OnEndActivationTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UBaseAIPoint::OnBeginActivationTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UBaseAIPoint::IsEnabled() const {
    return false;
}

float UBaseAIPoint::GetPriorityMultiplier() const {
    return 0.0f;
}

FPawnFilter UBaseAIPoint::GetPawnFilter() const {
    return FPawnFilter{};
}


