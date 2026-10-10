#include "CharacterIKControllerComponent.h"

UCharacterIKControllerComponent::UCharacterIKControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mIkRig = NULL;
    this->TasksSetup = NULL;
    this->mCachedSkeletalMesh = NULL;
    this->mAnimInstance = NULL;
    this->mAnimBpClass = NULL;
    this->mFlowControlComponent = NULL;
}

void UCharacterIKControllerComponent::UnsetTask(EIKTaskIdentifier TaskID, float BlendTime, UCurveFloat* blendCurve) {
}

FKosmosIKSolverTask UCharacterIKControllerComponent::SetupTask(EIKTaskIdentifier TaskID) {
    return FKosmosIKSolverTask{};
}

void UCharacterIKControllerComponent::SetTask(EIKTaskIdentifier TaskID, const FTransform& worldSpaceTarget, float BlendWeight, float BlendTime, bool EnableTranslation, bool enableRotation, UCurveFloat* blendCurve) {
}

void UCharacterIKControllerComponent::SetDynamicTaskWithName(EIKTaskIdentifier TaskID, USceneComponent* Component, const FTransform& localSpaceTarget, FName TargetBone, float BlendWeight, float BlendTime, bool EnableTranslation, bool enableRotation, UCurveFloat* blendCurve) {
}

void UCharacterIKControllerComponent::SetDynamicTaskWithCurve(EIKTaskIdentifier TaskID, USceneComponent* Component, const FTransform& localSpaceTarget, bool EnableTranslation, bool enableRotation) {
}

void UCharacterIKControllerComponent::SetDynamicTask(EIKTaskIdentifier TaskID, USceneComponent* Component, const FTransform& localSpaceTarget, float BlendWeight, float BlendTime, bool EnableTranslation, bool enableRotation, UCurveFloat* blendCurve) {
}

void UCharacterIKControllerComponent::ModifyTaskTransform(EIKTaskIdentifier TaskID, const FTransform& localSpaceTarget, bool bIsLocalTransform) {
}

bool UCharacterIKControllerComponent::IsTaskSet(EIKTaskIdentifier TaskID) const {
    return false;
}

bool UCharacterIKControllerComponent::IsTaskActive(EIKTaskIdentifier TaskID) const {
    return false;
}

bool UCharacterIKControllerComponent::IsAnyTaskActive() const {
    return false;
}

bool UCharacterIKControllerComponent::HasTaskConfig(EIKTaskIdentifier TaskID) {
    return false;
}

FTransform UCharacterIKControllerComponent::GetTaskTargetTransform(EIKTaskIdentifier TaskID) const {
    return FTransform{};
}

FKosmosIKTaskProperties UCharacterIKControllerComponent::GetTaskProperties(EIKTaskIdentifier TaskID) const {
    return FKosmosIKTaskProperties{};
}

FTransform UCharacterIKControllerComponent::GetTaskCurrentTransform(EIKTaskIdentifier TaskID) const {
    return FTransform{};
}

FKosmosIKSolverTask UCharacterIKControllerComponent::GetPoleVectorTaskSetup() const {
    return FKosmosIKSolverTask{};
}

FKosmosIKSolverTask UCharacterIKControllerComponent::GetDisabledTaskSetup() const {
    return FKosmosIKSolverTask{};
}

FIkTaskConfig UCharacterIKControllerComponent::GetCurrentTaskSetup(EIKTaskIdentifier TaskID) const {
    return FIkTaskConfig{};
}

FTransform UCharacterIKControllerComponent::GetBoneWorldTransformFromPose(FName comparisonPoseName, EIKTaskIdentifier TaskID) const {
    return FTransform{};
}

bool UCharacterIKControllerComponent::ComputeAggregatedIKErrorAgainstPose(FVector& outTranslationError, FRotator& outRotationError, FName comparisonPoseName, FTransform Offset, EIKTaskAggregationMode errorMode) const {
    return false;
}

bool UCharacterIKControllerComponent::ComputeAggregatedIKError(FVector& outTranslationError, FRotator& outRotationError, FTransform Offset, EIKTaskAggregationMode errorMode) const {
    return false;
}


