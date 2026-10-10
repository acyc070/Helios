#include "AIPatternBrain.h"

UAIPatternBrain::UAIPatternBrain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mAllowEventDriven = true;
}

bool UAIPatternBrain::IsRunningAnyPatterns() const {
    return false;
}

void UAIPatternBrain::ForgetDetections() {
}


