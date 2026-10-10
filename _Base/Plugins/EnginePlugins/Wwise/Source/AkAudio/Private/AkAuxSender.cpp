#include "AkAuxSender.h"
#include "AkComponent.h"

AAkAuxSender::AAkAuxSender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAuxSender"));
    this->mActive = true;
    this->mAuxBus = NULL;
    this->mSendLevel = 1.00f;
}

void AAkAuxSender::SetListeners(TArray<UAkComponent*> inListeners) {
}

void AAkAuxSender::Activate(bool Inactive) {
}


