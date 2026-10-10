#include "AutoprogressPuzzlePiece.h"

UAutoprogressPuzzlePiece::UAutoprogressPuzzlePiece(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isAutoProgress = true;
    this->mSpeedAutoprogress = 1.00f;
    this->isAutoRegress = true;
    this->mSpeedAutoregress = 1.00f;
}


