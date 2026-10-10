#include "PlaypalActionCondition.h"

FPlaypalActionCondition::FPlaypalActionCondition() {
    this->performAction = EPuzzlePiecePlaypalActionModifiers::ActionMod_Same;
    this->conditionOperator = EPuzzlePieceConditionOperators::Progress_Bigger;
    this->conditionAmount = 0.00f;
}

