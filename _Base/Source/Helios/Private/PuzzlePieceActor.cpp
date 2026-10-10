#include "PuzzlePieceActor.h"
#include "AIPuzzleInteraction.h"

APuzzlePieceActor::APuzzlePieceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isSavingOnCheckpoint = true;
    this->isPuzzlePieceActive = true;
    this->bSmoothControllerInput = false;
    this->mCustomCopyProgress = ECustomCopyProgressTypes::Copy_Regular;
    this->isUsableByAI = true;
    this->mAIUseAutomatically = false;
    this->mAIIgnoreCompletionCheck = false;
    this->mAICanBeCalled = true;
    this->mAICallRadius = 300.00f;
    this->mAIPriority = 0;
    this->mAITargetProgress = 1.00f;
    this->mAITimeToReachTargetProgress = 1.00f;
    this->mAICanDisengage = true;
    this->mEnableAutomaticDisengage = false;
    this->mInteractLocationOffsetMethod = EAIOffsetLocationMethod::ForwardAxisOffset;
    this->mAILocationOffset = 100.00f;
    this->mAIInteraction = UAIPuzzleInteraction::StaticClass();
    this->mAILinkedObject = NULL;
    this->mCustomCopyCurveFloat = NULL;
}

void APuzzlePieceActor::WeldBodies(UPrimitiveComponent* Root, UPrimitiveComponent* Child) {
}

void APuzzlePieceActor::StopInterpolateProgressOverTime() {
}

void APuzzlePieceActor::StopAction(bool IsPlayer, bool isPlaypal) {
}

void APuzzlePieceActor::StartAction(bool IsPlayer, bool isPlaypal) {
}

void APuzzlePieceActor::SetPieceProgress(float Progress, bool propagating) {
}

void APuzzlePieceActor::SetPieceEnabled(bool Enabled) {
}

void APuzzlePieceActor::SetDefaultProgress(float Progress) {
}















void APuzzlePieceActor::OnWorldReloaded() {
}

bool APuzzlePieceActor::IsThisPieceBeingUsedBy(EPuzzlePieceUsers users) const {
    return false;
}

bool APuzzlePieceActor::IsThisPieceBeingUsed() const {
    return false;
}

bool APuzzlePieceActor::IsThisPieceActiveBP() const {
    return false;
}

void APuzzlePieceActor::InterpolateProgressOverTime(bool startFromCurrent, float fromProgress, float toProgress, float Seconds, bool scaleTimeToPartialRange) {
}

void APuzzlePieceActor::GetUsersForThisPiece(bool& IsPlayer, bool& isPlaypal) const {
}

float APuzzlePieceActor::GetTimeSinceLastUsedByPlaypal() const {
    return 0.0f;
}

float APuzzlePieceActor::GetTimeSinceLastUsedByPlayer() const {
    return 0.0f;
}

FPuzzlePieceEditorDropDown APuzzlePieceActor::GetThisPuzzlePieceBP() const {
    return FPuzzlePieceEditorDropDown{};
}

float APuzzlePieceActor::GetThisPieceProgressBP() const {
    return 0.0f;
}

AActor* APuzzlePieceActor::GetThisPieceActorBP() {
    return NULL;
}

float APuzzlePieceActor::GetPieceProgress() const {
    return 0.0f;
}

bool APuzzlePieceActor::GetPieceEnabled() const {
    return false;
}

bool APuzzlePieceActor::CanAIUsePuzzlePiece_Implementation(AControlledPawn* Pawn) const {
    return false;
}


