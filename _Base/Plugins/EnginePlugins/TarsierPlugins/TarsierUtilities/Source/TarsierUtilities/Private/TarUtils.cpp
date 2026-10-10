#include "TarUtils.h"

UTarUtils::UTarUtils() {
}

void UTarUtils::SwitchOnPlatform(EPlatform& Platform) {
}

void UTarUtils::SwitchOnBuildType(EBuildType& Build) {
}

void UTarUtils::LogVisibleError(const FString& Message) {
}

bool UTarUtils::IsInEditor() {
    return false;
}

bool UTarUtils::IsGamesComDemo() {
    return false;
}

EPlatform UTarUtils::GetPlatform() {
    return EPlatform::PC;
}

EBuildType UTarUtils::GetBuildType() {
    return EBuildType::Test;
}

void UTarUtils::AddOnScreenDebugMessage(int32 Channel, const FString& Message, FLinearColor Color, float Timeout) {
}


