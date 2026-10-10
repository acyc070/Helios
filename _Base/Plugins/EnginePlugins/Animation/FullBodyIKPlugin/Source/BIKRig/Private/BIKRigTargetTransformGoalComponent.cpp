#include "BIKRigTargetTransformGoalComponent.h"

UBIKRigTargetTransformGoalComponent::UBIKRigTargetTransformGoalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TranslationIsOffsetFromEffector = false;
    this->OrientationIsOffsetFromEffector = false;
    this->TargetAlpha = 1.00f;
    this->bUseActiveFadeOut = true;
    this->bConstrainTranslation = true;
    this->bConstrainOrientation = true;
    this->bIncreaseStability = true;
    this->TranslationStiffness = 2000.00f;
    this->OrientationStiffness = 4000.00f;
    this->TranslationMaxError = 50.00f;
    this->TranslationStiffnessFadeRatio = 0.00f;
    this->OrientationMaxError = 3.14f;
    this->OrientationStiffnessFadeRatio = 0.01f;
}


