#include "BIKRigBallJoint.h"

UBIKRigBallJoint::UBIKRigBallJoint() {
    this->bLimitSwing = false;
    this->SwingLimit1 = 45.00f;
    this->SwingLimit2 = 45.00f;
    this->bLimitTwist = false;
    this->TwistMin = -20.00f;
    this->TwistMax = 20.00f;
    this->AllowTranslation = false;
    this->TranslateX = false;
    this->TranslateY = false;
    this->TranslateZ = false;
}


