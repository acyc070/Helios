#include "KosmosIKTaskSetup.h"

UKosmosIKTaskSetup::UKosmosIKTaskSetup() {
    this->TranslationIsOffsetFromEffector = false;
    this->OrientationIsOffsetFromEffector = false;
    this->IncreaseStability = true;
    this->TranslationSolverDepth = -1;
    this->OrientationSolverDepth = -1;
    this->TranslationStiffness = 2000.00f;
    this->TranslationMaxError = 50.00f;
    this->TranslationStiffnessFadeRatio = 0.00f;
    this->TranslationWeightScaling = 1.00f;
    this->OrientationStiffness = 2000.00f;
    this->OrientationMaxError = 3.14f;
    this->OrientationStiffnessFadeRatio = 0.00f;
    this->OrientationWeightScaling = 1.00f;
}


