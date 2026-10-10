#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mCurrentEquipmentItemSlot = EEquipSlots::None;
    this->mEquipmentItemSlotForcedStow = EEquipSlots::None;
}

void UInventoryComponent::ToggleEquipItem(const EEquipSlots Item) {
}

void UInventoryComponent::SpawnEquipItem(const EEquipSlots Item, bool saveEquippedItem) {
}

void UInventoryComponent::RemoveStoredItem(const FName& storedItem) {
}

void UInventoryComponent::RemoveItemFromInventory(const EEquipSlots equipmentSlot, bool saveRemovedItem) {
}

bool UInventoryComponent::PutDownItemImmediately() {
    return false;
}

bool UInventoryComponent::HasStoredItem(const FName& inventoryKey) const {
    return false;
}

bool UInventoryComponent::HasInventoryItem(const EEquipSlots Item) const {
    return false;
}

UPickupComponent* UInventoryComponent::GetInventoryItem(const EEquipSlots Item) const {
    return NULL;
}

UPickupComponent* UInventoryComponent::GetCurrentlyHeldPickup() const {
    return NULL;
}

AActor* UInventoryComponent::GetCurrentCarryable() const {
    return NULL;
}

void UInventoryComponent::AddStoredItem(const FName& storedItem) {
}


