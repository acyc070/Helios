#include "PuzzlePieceLibrary.h"

UPuzzlePieceLibrary::UPuzzlePieceLibrary() {
}

void UPuzzlePieceLibrary::StopPieceAction(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, bool IsPlayer, bool isPlaypal) {
}

void UPuzzlePieceLibrary::StartPieceAction(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, bool IsPlayer, bool isPlaypal) {
}

void UPuzzlePieceLibrary::SetPieceActive(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, bool IsActive) {
}

void UPuzzlePieceLibrary::SetPieceActionProgressTo(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, float newProgress) {
}

FPuzzlePieceEditorDropDown UPuzzlePieceLibrary::MakeLiteralPuzzlePiece(FPuzzlePieceEditorDropDown puzzlePiece) {
    return FPuzzlePieceEditorDropDown{};
}

bool UPuzzlePieceLibrary::isPuzzlePieceNameDifferentToString(FPuzzlePieceEditorDropDown A, const FString& B, const FString& ContextString) {
    return false;
}

bool UPuzzlePieceLibrary::IsPieceUsedBy(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece, EPuzzlePieceUsers users) {
    return false;
}

bool UPuzzlePieceLibrary::IsPieceUsed(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece) {
    return false;
}

bool UPuzzlePieceLibrary::IsPieceNotEqual(UObject* WorldContextObject, FPuzzlePieceEditorDropDown A, FPuzzlePieceEditorDropDown B) {
    return false;
}

bool UPuzzlePieceLibrary::IsPieceEqual(UObject* WorldContextObject, FPuzzlePieceEditorDropDown A, FPuzzlePieceEditorDropDown B) {
    return false;
}

bool UPuzzlePieceLibrary::IsPieceActive(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece) {
    return false;
}

FName UPuzzlePieceLibrary::GetPuzzlePieceName(FPuzzlePieceEditorDropDown puzzlePiece) {
    return NAME_None;
}

AActor* UPuzzlePieceLibrary::GetPuzzlePieceActor(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece) {
    return NULL;
}

float UPuzzlePieceLibrary::GetPieceProgressAction(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece) {
    return 0.0f;
}

float UPuzzlePieceLibrary::GetExposedFloatCurveValueAtTime(FRuntimeFloatCurve Curve, float Time) {
    return 0.0f;
}

void UPuzzlePieceLibrary::EjectPickupFromSlot(UObject* WorldContextObject, AActor* pickupActor) {
}

void UPuzzlePieceLibrary::EjectCarriableFromSlot(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece) {
}

void UPuzzlePieceLibrary::EjectAllCarriablesFromSlot(UObject* WorldContextObject, FPuzzlePieceEditorDropDown puzzlePiece) {
}

bool UPuzzlePieceLibrary::CheckPPCondition(UObject* WorldContextObject, FPuzzlePieceCondition condition) {
    return false;
}

void UPuzzlePieceLibrary::AttachPickupToSlot(UObject* WorldContextObject, AActor* pickupActor, FPuzzlePieceEditorDropDown Slot, bool instant) {
}

void UPuzzlePieceLibrary::AttachCarriableToSlot(UObject* WorldContextObject, FPuzzlePieceEditorDropDown carriable, FPuzzlePieceEditorDropDown Slot, bool instant) {
}


