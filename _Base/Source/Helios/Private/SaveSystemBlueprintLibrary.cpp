#include "SaveSystemBlueprintLibrary.h"

USaveSystemBlueprintLibrary::USaveSystemBlueprintLibrary() {
}

void USaveSystemBlueprintLibrary::SetActiveSaveSlot(int32 SlotIndex) {
}

void USaveSystemBlueprintLibrary::SaveCurrentWorld() {
}

void USaveSystemBlueprintLibrary::PurgeGameProgression(bool andMetaProgression) {
}

bool USaveSystemBlueprintLibrary::IsSaveInProgress() {
    return false;
}

bool USaveSystemBlueprintLibrary::HasSaveData(int32 saveSlotIndex) {
    return false;
}

int32 USaveSystemBlueprintLibrary::GetActiveSaveSlotIndex() {
    return 0;
}

USaveSlot* USaveSystemBlueprintLibrary::GetActiveSaveSlot() {
    return NULL;
}

void USaveSystemBlueprintLibrary::DeleteSaveSlot(int32 saveSlotIndex) {
}


