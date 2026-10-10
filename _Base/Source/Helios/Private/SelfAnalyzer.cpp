#include "SelfAnalyzer.h"

USelfAnalyzer::USelfAnalyzer() {
    this->mNavlinkApproachDistance = 200.00f;
}

void USelfAnalyzer::OnWeaponAttackDangerEvent(const FWeaponAttackStartEvent& DangerEvent, float EventDistance) {
}

void USelfAnalyzer::OnPawnTouchEvent(const FGenericGameEvent& gameEvent) {
}

void USelfAnalyzer::OnPathCleared() {
}


