#include "BIKGroundCollisionTraceParams.h"

FBIKGroundCollisionTraceParams::FBIKGroundCollisionTraceParams() {
    this->UseBoneInputLocationAsTarget = false;
    this->UseForSinking = false;
    this->MaintainHeightAboveGround = false;
    this->bUseSlopeAdjustmentCurves = false;
    this->PositionAdjustmentCurve = NULL;
    this->OrientationAdjustmentCurve = NULL;
    this->MatchGroundOrientation = false;
    this->MatchGroundOrientationMaxAdjustmentDegrees = 0.00f;
    this->MatchGroundOrientationFadeOutDegrees = 0.00f;
    this->MatchGroundOrientationInterpSpeed = 0.00f;
    this->MatchGroundOrientationFadeOutHeight = 0.00f;
    this->SnapToSurface = false;
    this->CosHalfMaxOrientationAdjustment = 0.00f;
    this->CosHalfOrientationFadeOutAngle = 0.00f;
}

