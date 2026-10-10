#include "TarInputKeyMapper.h"

UTarInputKeyMapper::UTarInputKeyMapper() {
    this->ForbiddenKeysToBind = NULL;
}

void UTarInputKeyMapper::SaveMappings() {
}

void UTarInputKeyMapper::RemoveAxisMapping(FTarInputAxisKeyMapping Mapping) {
}

void UTarInputKeyMapper::RemoveActionMapping(FTarInputActionKeyMapping Mapping) {
}

bool UTarInputKeyMapper::RemapToScheme(EHeliosInputScheme NewScheme) {
    return false;
}

bool UTarInputKeyMapper::RemapAxis(FTarInputAxisKeyMapping oldMapping, FTarInputAxisKeyMapping newMapping) {
    return false;
}

bool UTarInputKeyMapper::RemapAction(FTarInputActionKeyMapping oldMapping, FTarInputActionKeyMapping newMapping) {
    return false;
}

bool UTarInputKeyMapper::KeyHasPriority(const FKey& Key, bool PrioritizeGamepadKey) const {
    return false;
}

bool UTarInputKeyMapper::IsKeyForbiddenToBind(const FKey& Key) const {
    return false;
}

void UTarInputKeyMapper::InvertAxis(const FName AxisName, APlayerController* PlayerController) {
}

bool UTarInputKeyMapper::GetInvertAxis(const FName AxisName, APlayerController* PlayerController) {
    return false;
}

TArray<FInputAxisKeyMapping> UTarInputKeyMapper::GetAllDefaultAxisMappings() const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> UTarInputKeyMapper::GetAllDefaultActionMappings() const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FTarInputAxisKeyMapping> UTarInputKeyMapper::GetAllAxisMappings(bool sortArray) const {
    return TArray<FTarInputAxisKeyMapping>();
}

TArray<FTarInputActionKeyMapping> UTarInputKeyMapper::GetAllActionMappings(bool sortArray) const {
    return TArray<FTarInputActionKeyMapping>();
}

bool UTarInputKeyMapper::AddAxisMapping(FTarInputAxisKeyMapping Mapping) {
    return false;
}

bool UTarInputKeyMapper::AddActionMapping(FTarInputActionKeyMapping Mapping) {
    return false;
}


