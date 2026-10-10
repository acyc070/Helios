#include "KosmosIKTaskProperties.h"

FKosmosIKTaskProperties::FKosmosIKTaskProperties() {
    this->PositionStiffness = 0.00f;
    this->PositionMaxError = 0.00f;
    this->PositionStiffnessFadeRatio = 0.00f;
    this->PositionWeightScaling = 0.00f;
    this->OrientationStiffness = 0.00f;
    this->OrientationMaxError = 0.00f;
    this->OrientationStiffnessFadeRatio = 0.00f;
    this->OrientationIsOffset = false;
    this->OrientationWeightScaling = 0.00f;
    this->IncreaseStability = false;
}

