#include "AnimNode_BIKRig.h"

FAnimNode_BIKRig::FAnimNode_BIKRig() {
    this->NumberOfSubsteps = 0;
    this->IterationsPerSubstep = 0;
    this->UseDirectSolve = false;
    this->UseCustomTimeStep = false;
    this->CustomTimeStep = 0.00f;
    this->Alpha = 0.00f;
    this->LODThreshold = 0;
    this->ActualAlpha = 0.00f;
}

