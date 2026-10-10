#include "MaskSystem.h"

UMaskSystem::UMaskSystem() {
}

void UMaskSystem::TakeOffCurrentMask() const {
}

void UMaskSystem::SetCurrentMaskUniqueId(const FName& UniqueId) {
}

void UMaskSystem::SaveMaskNotifications() {
}

void UMaskSystem::PutOnCurrentMask() const {
}

bool UMaskSystem::MarkMaskAsViewed(const FName& UniqueId) {
    return false;
}

bool UMaskSystem::IsMaskViewed(const FName& UniqueId) {
    return false;
}

bool UMaskSystem::IsMaskUnlocked(const FName& UniqueId) {
    return false;
}

FMaskData UMaskSystem::GetMaskData(const FName& UniqueId) const {
    return FMaskData{};
}

FName UMaskSystem::GetCurrentMaskUniqueId() const {
    return NAME_None;
}

FName UMaskSystem::GetCachedMaskUniqueId() const {
    return NAME_None;
}

TArray<FMaskData> UMaskSystem::GetAllMasksData() const {
    return TArray<FMaskData>();
}

void UMaskSystem::CacheCurrentMaskUniqueId(FName UniqueId) {
}


