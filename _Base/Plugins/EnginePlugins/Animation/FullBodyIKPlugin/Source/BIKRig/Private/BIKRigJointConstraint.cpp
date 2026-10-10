#include "BIKRigJointConstraint.h"

UBIKRigJointConstraint::UBIKRigJointConstraint() {
    this->JointIndex = -1;
}

FName UBIKRigJointConstraint::GetBoneName(UBIKRig* Rig) const {
    return NAME_None;
}


