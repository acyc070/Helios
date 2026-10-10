#include "AkAcousticPortal.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->InitialState = AkAcousticPortalState::Open;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionCollisionChannel = ECC_Visibility;
}

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}


