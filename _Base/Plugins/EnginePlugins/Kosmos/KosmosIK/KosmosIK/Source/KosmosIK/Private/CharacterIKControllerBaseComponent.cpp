#include "CharacterIKControllerBaseComponent.h"

UCharacterIKControllerBaseComponent::UCharacterIKControllerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HipsTaskName = TEXT("pelvis_task");
    this->ChestTaskName = TEXT("chest_task");
    this->LeftHandTaskName = TEXT("wrist_left_task");
    this->RightHandTaskName = TEXT("wrist_right_task");
    this->LeftToeTaskName = TEXT("toe_left_task");
    this->RightToeTaskName = TEXT("toe_right_task");
    this->LeftAnkleTaskName = TEXT("ankle_left_task");
    this->RightAnkleTaskName = TEXT("ankle_right_task");
    this->LeftKneeTaskName = TEXT("knee_left_task");
    this->RightKneeTaskName = TEXT("knee_right_task");
    this->HeadTaskName = TEXT("head_task");
    this->LeftShoulderTaskName = TEXT("shoulder_left_task");
    this->RightShoulderTaskName = TEXT("shoulder_right_task");
    this->CustomOneTaskName = TEXT("custom_one_task");
    this->CustomTwoTaskName = TEXT("custom_two_task");
    this->CustomThreeTaskName = TEXT("custom_three_task");
    this->CustomFourTaskName = TEXT("custom_four_task");
    this->CustomFiveTaskName = TEXT("custom_five_task");
    this->IsComponentActive = false;
}


