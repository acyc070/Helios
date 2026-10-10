#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MetaGameProgressionBlueprintLibrary.generated.h"

class UChalkboardWrapper;

UCLASS(Blueprintable)
class HELIOS_API UMetaGameProgressionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMetaGameProgressionBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static UChalkboardWrapper* GetSerializedReadOnlyMetaChalkboardForSaveSlot(int32 saveSlotIndex);
    
    UFUNCTION(BlueprintPure)
    static UChalkboardWrapper* GetMetaChalkboard();
    
};

