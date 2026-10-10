#include "JumpParameters.h"

FJumpParameters::FJumpParameters() {
    this->mJumpType = EJumpTypes::None;
    this->mAllowJumpAlignment = EJumpAlignmentRule::NoAlignment;
    this->mCheckCeilingHeight = false;
    this->mUseJumpTarget = false;
}

