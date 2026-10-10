#include "CustomAnimationOptions.h"

FCustomAnimationOptions::FCustomAnimationOptions() {
    this->mAnimation = NULL;
    this->mBlendspace = NULL;
    this->mMovementRestriction = EMovementRestriction::NormalMovement;
    this->mLoop = false;
}

