#include "PuzzlePieceMultiStateActor.h"

APuzzlePieceMultiStateActor::APuzzlePieceMultiStateActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mNumberOfStates = 1;
    this->mInitialState = 0;
    this->mInitialStateProgress = 0.00f;
}

void APuzzlePieceMultiStateActor::SetStateProgress(float newStateProgress) {
}

void APuzzlePieceMultiStateActor::SetState(int32 NewState, float newStateProgress) {
}

void APuzzlePieceMultiStateActor::SetNumberOfStates(int32 newNumberOfStates, int32 NewState, float newStateProgress) {
}

void APuzzlePieceMultiStateActor::InterpolateToStateAndProgressOverTime(bool startFromCurrent, int32 fromState, float fromStateProgress, int32 toState, float toStateProgress, float Seconds, bool scaleTimeToPartialRange) {
}

float APuzzlePieceMultiStateActor::GetStateProgress() const {
    return 0.0f;
}

void APuzzlePieceMultiStateActor::GetStateAndStateProgressAtSpecificProgress(int32& currentState, float& currentStateProgress, float Progress) const {
}

void APuzzlePieceMultiStateActor::GetStateAndProgress(int32& currentState, float& currentStateProgress) const {
}

int32 APuzzlePieceMultiStateActor::GetState() const {
    return 0;
}

float APuzzlePieceMultiStateActor::GetProgressFromStateAndStateProgress(int32 State, float stateProgress) {
    return 0.0f;
}

int32 APuzzlePieceMultiStateActor::GetNumberOfStates() const {
    return 0;
}


