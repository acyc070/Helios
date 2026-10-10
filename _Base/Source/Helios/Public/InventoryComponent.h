#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEquipSlots.h"
#include "InventoryComponent.generated.h"

class AActor;
class UPickupComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipSlots mCurrentEquipmentItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipSlots mEquipmentItemSlotForcedStow;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ToggleEquipItem(const EEquipSlots Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnEquipItem(const EEquipSlots Item, bool saveEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStoredItem(const FName& storedItem);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromInventory(const EEquipSlots equipmentSlot, bool saveRemovedItem);
    
private:
    UFUNCTION(BlueprintCallable)
    bool PutDownItemImmediately();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasStoredItem(const FName& inventoryKey) const;
    
    UFUNCTION(BlueprintPure)
    bool HasInventoryItem(const EEquipSlots Item) const;
    
    UFUNCTION(BlueprintPure)
    UPickupComponent* GetInventoryItem(const EEquipSlots Item) const;
    
private:
    UFUNCTION(BlueprintPure)
    UPickupComponent* GetCurrentlyHeldPickup() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentCarryable() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddStoredItem(const FName& storedItem);
    
};

