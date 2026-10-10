#include "HeliosNavlinkComponent.h"
#include "Components/SphereComponent.h"

UHeliosNavlinkComponent::UHeliosNavlinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Links.AddDefaulted(1);
    this->mSphereTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("NavlinkSphere"));
    this->mTraversal = ENavlinkTraversal::Teleport;
    this->mSnapToInitialRotation = true;
    this->mEnabled = true;
    this->mUseAbilitySetOverride = false;
}

void UHeliosNavlinkComponent::StopTraversal() {
}

void UHeliosNavlinkComponent::SetEnabled(bool onOff) {
}

FVector UHeliosNavlinkComponent::Right() const {
    return FVector{};
}

void UHeliosNavlinkComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHeliosNavlinkComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHeliosNavlinkComponent::NavlinkAttachmentsOnOff(bool onOff) {
}

void UHeliosNavlinkComponent::ModifyNavlinkExtremities(const FVector& NewLeft, const FVector& NewRight, int32 navlinkIndex) {
}

FVector UHeliosNavlinkComponent::Left() const {
    return FVector{};
}

USceneComponent* UHeliosNavlinkComponent::GetRightAttachmentComponent() {
    return NULL;
}

USceneComponent* UHeliosNavlinkComponent::GetLeftAttachmentComponent() {
    return NULL;
}

FNavigationLink UHeliosNavlinkComponent::GetCurrentLink() const {
    return FNavigationLink{};
}


