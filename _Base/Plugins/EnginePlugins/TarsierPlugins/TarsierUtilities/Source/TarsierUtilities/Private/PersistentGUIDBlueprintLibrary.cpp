#include "PersistentGUIDBlueprintLibrary.h"

UPersistentGUIDBlueprintLibrary::UPersistentGUIDBlueprintLibrary() {
}

FString UPersistentGUIDBlueprintLibrary::Conv_PersistentGUIDToString(FPersistentGUID PersistentGUID) {
    return TEXT("");
}

FName UPersistentGUIDBlueprintLibrary::Conv_PersistentGUIDToName(FPersistentGUID PersistentGUID) {
    return NAME_None;
}

FGuid UPersistentGUIDBlueprintLibrary::Conv_PersistentGUIDToGuid(FPersistentGUID PersistentGUID) {
    return FGuid{};
}


