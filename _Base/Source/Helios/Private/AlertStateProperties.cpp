#include "AlertStateProperties.h"

FAlertStateProperties::FAlertStateProperties() {
    this->bIsEnabled = false;
    this->StateCooldown = 0.00f;
    this->StateDuration = 0.00f;
    this->NoiseStrengthToIdentify = ENoiseStrength::Silent;
}

