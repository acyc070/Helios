#include "PlayAnimStateOptions.h"

FPlayAnimStateOptions::FPlayAnimStateOptions() {
    this->SkipExitTransition = false;
    this->SkipEnterTransition = false;
    this->SmartContextDomination = false;
    this->ReevaluateIfContextChange = false;
}

