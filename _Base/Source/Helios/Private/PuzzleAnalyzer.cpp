#include "PuzzleAnalyzer.h"

UPuzzleAnalyzer::UPuzzleAnalyzer() {
    this->mIsLeadPuzzleSolver = false;
    this->mIsAssociatePuzzleSolver = false;
    this->mCheckForPath = false;
    this->mBestPuzzlePieceForLeadSolver = NULL;
    this->mBestPuzzlePieceForAssociateSolver = NULL;
}


