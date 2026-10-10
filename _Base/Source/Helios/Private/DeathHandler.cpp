#include "DeathHandler.h"

UDeathHandler::UDeathHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mDeathHandlingData = NULL;
    this->mScriptInstance = NULL;
    this->mControllerToRespawnPlayerWith = NULL;
}

void UDeathHandler::OnWorldSoftReloadCompleted(UWorld* World) {
}

void UDeathHandler::OnFlowControlAnimNotify(const FFlowControlAnimNotifyData& notifyData) {
}

void UDeathHandler::ConfirmKill() {
}


