#include "GrabEvent.h"

FGrabEvent::FGrabEvent() {
    this->mGrabType = EGrabEventType::Unspecified;
    this->mGrabProgress = EGrabEventProgress::Unspecified;
    this->mGrabbedActor = NULL;
    this->mGrabHelper = NULL;
}

