#include "BIKRigSolverComponent.h"

UBIKRigSolverComponent::UBIKRigSolverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rig = NULL;
    this->bResetSolvedPose = false;
}

void UBIKRigSolverComponent::ResetSolvedPose() {
}


