#include "BIKRigJointBody.h"

UBIKRigJointBody::UBIKRigJointBody() {
    this->JointIndex = -1;
    this->Density = 0.00f;
    this->TargetPoseRotationStiffness = 4.00f;
    this->TargetPoseTranslationStiffness = 12.00f;
    this->RotationStiffnessScale = 1.00f;
    this->TranslationStiffnessScale = 1.00f;
}

FName UBIKRigJointBody::GetBoneName(UBIKRig* Rig) const {
    return NAME_None;
}

FTransform UBIKRigJointBody::GetBodyLocalTransform() const {
    return FTransform{};
}


