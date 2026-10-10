#include "KosmosBIKLimbBone.h"

FKosmosBIKLimbBone::FKosmosBIKLimbBone() {
    this->Shape = EKosmosBIKShape::Line;
    this->SurfaceOffset = 0.00f;
    this->DrawDebug = false;
    this->UseCustomScale = false;
    this->CustomRayTraceStartScale = 0.00f;
    this->CustomRayTraceFinishScale = 0.00f;
    this->bUseFKOrientation = false;
}

