#include "BIKRigHingeJoint.h"

UBIKRigHingeJoint::UBIKRigHingeJoint() {
    this->bLimitRotation = false;
    this->TwistMin = -20.00f;
    this->TwistMax = 20.00f;
    this->TranslateX = false;
    this->TranslateY = false;
    this->TranslateZ = false;
    this->OrientationStiffnessScaleAlongJointAxis = 1.00f;
}


