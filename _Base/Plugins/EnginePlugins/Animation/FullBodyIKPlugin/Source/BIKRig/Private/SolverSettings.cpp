#include "SolverSettings.h"

USolverSettings::USolverSettings() {
    this->NumberOfSubsteps = 1;
    this->IterationsPerSubstep = 20;
    this->UseDirectSolve = false;
    this->UseCustomTimeStep = false;
    this->CustomTimeStep = 0.02f;
}


