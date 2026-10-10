#include "AchievementSystem.h"

UAchievementSystem::UAchievementSystem() {
}

bool UAchievementSystem::RequestUnlockAchievement(EAchievement achievement) {
    return false;
}

void UAchievementSystem::OnSetUser() {
}

bool UAchievementSystem::IsAchievementUnlockedPlatform(EAchievement achievement) {
    return false;
}

bool UAchievementSystem::IsAchievementUnlockedLocal(EAchievement achievement) {
    return false;
}

bool UAchievementSystem::IncrementAchievementReference(EAchievement achievement, const FName& reference) {
    return false;
}

bool UAchievementSystem::IncrementAchievementCount(EAchievement achievement, int32 Amount) {
    return false;
}

void UAchievementSystem::GetAchievementProgress(EAchievement achievement, int32& Count, int32& Target) {
}

bool UAchievementSystem::ForceUnlockAchievement(EAchievement achievement) {
    return false;
}


