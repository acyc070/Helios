#include "ReloadIfEmptyPattern.h"
#include "EPatternPriority.h"

UReloadIfEmptyPattern::UReloadIfEmptyPattern() {
    this->mPriority = EPatternPriority::Alert;
    this->mFirearm = NULL;
}


