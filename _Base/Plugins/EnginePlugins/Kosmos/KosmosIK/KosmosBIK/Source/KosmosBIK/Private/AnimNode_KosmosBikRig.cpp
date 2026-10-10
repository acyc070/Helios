#include "AnimNode_KosmosBikRig.h"

FAnimNode_KosmosBikRig::FAnimNode_KosmosBikRig() {
    this->TasksSetup = NULL;
    this->BIKRig = NULL;
    this->bProcessCodedTasks = false;
    this->bProcessCustomTasks = false;
    this->bEnableDebug = false;
    this->bEnableDebugText = false;
    this->bEnableDebugOrbs = false;
    this->bEnableDebugCoords = false;
}

