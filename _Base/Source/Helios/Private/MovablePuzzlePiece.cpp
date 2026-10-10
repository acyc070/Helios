#include "MovablePuzzlePiece.h"

UMovablePuzzlePiece::UMovablePuzzlePiece(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mMoveType = EMovablePPTypes::Mov_Simple;
}


