#include "AnimNode_SetIkTargetFromGroundCollision.h"

FAnimNode_SetIkTargetFromGroundCollision::FAnimNode_SetIkTargetFromGroundCollision() {
    this->SweepStartOffset = 0.00f;
    this->SweepEndOffset = 0.00f;
    this->CollisionChannel = ECC_WorldStatic;
    this->PhysicsAsset = NULL;
    this->SlopeAdjustAlpha = 0.00f;
    this->ShouldSink = false;
    this->SinkSpringStiffness = 0.00f;
    this->MaximumSinkAmount = 0.00f;
    this->AnimGroundOffset = 0.00f;
    this->FadeOutSinkWithBoneHeight = false;
    this->StartFadeOutSinkHeight = 0.00f;
    this->FinishFadeOutSinkHeight = 0.00f;
    this->TargetInterpVelocity = 0.00f;
    this->TargetInterpMaximumError = 0.00f;
}

