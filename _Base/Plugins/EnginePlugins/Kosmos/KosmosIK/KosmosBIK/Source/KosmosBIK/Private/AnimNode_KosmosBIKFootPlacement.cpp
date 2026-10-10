#include "AnimNode_KosmosBIKFootPlacement.h"

FAnimNode_KosmosBIKFootPlacement::FAnimNode_KosmosBIKFootPlacement() {
    this->CollisionChannel = ECC_WorldStatic;
    this->AimWithWeapon = false;
    this->MaxHipMultiplier = 0.00f;
    this->MinHipMultiplier = 0.00f;
    this->GlobalRayTraceStartScale = 0.00f;
    this->GlobalRayTraceFinishScale = 0.00f;
    this->bAddHipsAverageToHands = false;
    this->bTraceComplex = false;
    this->LimitLegExtenstion = false;
    this->MaxLegExtension = 0.00f;
    this->ExposeSolverTasks = false;
    this->bUseFK = false;
    this->bReverseFootSetup = false;
    this->ReverseFootFactor = 0.00f;
    this->ReverseFootInterpSpeed = 0.00f;
    this->RollLimit = 0.00f;
    this->PitchLimit = 0.00f;
    this->PTransitionSpeed = 0.00f;
    this->RTransitionSpeed = 0.00f;
    this->PTransitionMaxDistance = 0.00f;
    this->LookAtAlpha = 0.00f;
    this->LookAtSmoothness = 0.00f;
    this->InComponentSpace = false;
    this->ReduceWeight = false;
    this->UseLookUpAxis = false;
    this->LookUpAxis = EKosmosBIKLimitAxisOption::X;
    this->LookAtClamp = 0.00f;
    this->LimitsInParentSpace = false;
    this->TraceDistance = 0.00f;
    this->EnableSlopeBehaviour = false;
    this->IgnoreFracturedDestructibles = false;
    this->bFloorContact = false;
    this->DrawDebug = false;
    this->bFootStabilization = false;
    this->StabilizationThreshold = 0.00f;
    this->GlobalDebugScale = 0.00f;
    this->NumOfItterations = 0;
}

