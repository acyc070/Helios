#include "AIAnimInstance.h"

UAIAnimInstance::UAIAnimInstance() {
    this->mUpdateWalkCycleRatio = true;
}

bool UAIAnimInstance::ShouldWalkOrIdle() const {
    return false;
}

bool UAIAnimInstance::ShouldIdle() const {
    return false;
}

bool UAIAnimInstance::ShouldExitWalk() const {
    return false;
}

bool UAIAnimInstance::IsQuickturnAllowed() const {
    return false;
}


