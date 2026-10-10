#include "AIScriptedSmartPointOrder.h"

UAIScriptedSmartPointOrder::UAIScriptedSmartPointOrder() {
    this->mSmartPoint = NULL;
    this->mNavigationSelection = ESmartPointNavigationSelection::Default;
    this->mNavigationOptions = NULL;
    this->mLookAtPoint = false;
}


