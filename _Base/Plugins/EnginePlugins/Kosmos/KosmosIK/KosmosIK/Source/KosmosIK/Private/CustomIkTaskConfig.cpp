#include "CustomIkTaskConfig.h"

FCustomIkTaskConfig::FCustomIkTaskConfig() {
    this->TaskID = EIKTaskIdentifier::IK_TARGET_INVALID;
    this->BoneId = 0;
    this->BlendWeight = 0.00f;
    this->BlendTime = 0.00f;
    this->BlendTimer = 0.00f;
    this->OptionalBlendCurve = NULL;
    this->BlendWeightTarget = 0.00f;
    this->BlendWeightStart = 0.00f;
    this->bEnableTranslation = false;
    this->bEnableRotation = false;
    this->bBlendUsingCurve = false;
}

