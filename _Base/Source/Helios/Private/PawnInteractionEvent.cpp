#include "PawnInteractionEvent.h"

FPawnInteractionEvent::FPawnInteractionEvent() {
    this->mInteractionState = EPawnInteractionState::Unspecified;
    this->mInteraction = NULL;
}

