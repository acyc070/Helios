#include "TacticalPoint.h"

UTacticalPoint::UTacticalPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mClassToRegister = UTacticalPoint::StaticClass();
    this->mPointType = ETacticalPointType::BelowSurface;
}


