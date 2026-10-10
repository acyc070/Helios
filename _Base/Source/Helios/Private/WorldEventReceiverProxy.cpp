#include "WorldEventReceiverProxy.h"

FWorldEventReceiverProxy::FWorldEventReceiverProxy() {
    this->mEventReceiver = NULL;
    this->mType = EGameEventType::Generic;
    this->mRange = 0.00f;
}

