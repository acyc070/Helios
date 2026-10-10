#include "AIGrabbedActorEvent.h"

FAIGrabbedActorEvent::FAIGrabbedActorEvent() {
    this->mAttachPoint = EAttachPoint::LeftHand;
    this->mGrabbedActor = NULL;
    this->mType = EAIGrabEventType::Attach;
}

