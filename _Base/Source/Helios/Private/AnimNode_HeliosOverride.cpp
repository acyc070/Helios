#include "AnimNode_HeliosOverride.h"

FAnimNode_HeliosOverride::FAnimNode_HeliosOverride() {
    this->DefaultSequence = NULL;
    this->TestSequence = NULL;
    this->AnimOverrideNode = EAnimOverrideType::None;
    this->WalkStopAnimationNode = EWalkStopOverrideType::WalkStopInvalid;
    this->mHasSerializedNewDataYet = false;
    this->mBlendInTime = 0.00f;
    this->mBlendOutTime = 0.00f;
    this->bLoopAnimation = false;
    this->mBlendProfile = NULL;
    this->mGroupIndex = 0;
    this->mGroupRole = EAnimGroupRole::CanBeLeader;
    this->mStartPosition = 0.00f;
    this->mPlayRate = 0.00f;
    this->mOwnerPawn = NULL;
}

