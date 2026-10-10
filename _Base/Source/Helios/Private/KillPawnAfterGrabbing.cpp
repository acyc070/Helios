#include "KillPawnAfterGrabbing.h"

UKillPawnAfterGrabbing::UKillPawnAfterGrabbing() {
    this->mInterrupter = true;
    this->bPlayerDeathWithNotify = false;
}

void UKillPawnAfterGrabbing::NotifyHit(const FFlowControlAnimNotifyData& AnimNotify) {
}


