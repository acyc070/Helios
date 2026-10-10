#include "HeliosComplianceLayerBlueprintLibrary.h"

UHeliosComplianceLayerBlueprintLibrary::UHeliosComplianceLayerBlueprintLibrary() {
}

void UHeliosComplianceLayerBlueprintLibrary::SetPresenceString(FLevelNameReference LevelName) {
}

bool UHeliosComplianceLayerBlueprintLibrary::IsEndSlateScreenBuild() {
    return false;
}

bool UHeliosComplianceLayerBlueprintLibrary::IsDemoBuild() {
    return false;
}

ESKU UHeliosComplianceLayerBlueprintLibrary::GetSkuRegion() {
    return ESKU::Europe;
}

UHeliosComplianceLayer* UHeliosComplianceLayerBlueprintLibrary::GetComplianceLayer() {
    return NULL;
}


