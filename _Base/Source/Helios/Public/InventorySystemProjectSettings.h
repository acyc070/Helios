#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEquipSlots.h"
#include "InventorySystemProjectSettings.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UInventorySystemProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipSlots, TSoftClassPtr<AActor>> mEquipSlotsToActorClass;
    
    UInventorySystemProjectSettings();

};

