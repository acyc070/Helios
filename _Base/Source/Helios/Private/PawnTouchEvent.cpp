#include "PawnTouchEvent.h"

FPawnTouchEvent::FPawnTouchEvent() {
    this->mTouchTarget = NULL;
    this->mTouchState = EPawnTouchState::Unspecified;
}

