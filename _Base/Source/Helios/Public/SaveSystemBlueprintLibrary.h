#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveSystemBlueprintLibrary.generated.h"

class USaveSlot;

UCLASS(Blueprintable)
class HELIOS_API USaveSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveSystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetActiveSaveSlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SaveCurrentWorld();
    
    UFUNCTION(BlueprintCallable)
    static void PurgeGameProgression(bool andMetaProgression);
    
    UFUNCTION(BlueprintPure)
    static bool IsSaveInProgress();
    
    UFUNCTION(BlueprintPure)
    static bool HasSaveData(int32 saveSlotIndex);
    
    UFUNCTION(BlueprintPure)
    static int32 GetActiveSaveSlotIndex();
    
    UFUNCTION(BlueprintPure)
    static USaveSlot* GetActiveSaveSlot();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSaveSlot(int32 saveSlotIndex);
    
};

