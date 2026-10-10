#include "KosmosIKSolverTask.h"

FKosmosIKSolverTask::FKosmosIKSolverTask() {
    this->TranslationIsOffsetFromEffector = false;
    this->OrientationIsOffsetFromEffector = false;
    this->PositionAlpha = 0.00f;
    this->RotationAlpha = 0.00f;
    this->EnableTranslation = false;
    this->EnableOrientation = false;
    this->EnableLookAt = false;
    this->PositionSolveDepth = 0;
    this->RotationSolveDepth = 0;
    this->InComponentSpace = false;
}

