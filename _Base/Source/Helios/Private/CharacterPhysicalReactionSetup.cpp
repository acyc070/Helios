#include "CharacterPhysicalReactionSetup.h"

FCharacterPhysicalReactionSetup::FCharacterPhysicalReactionSetup() {
    this->DamageType = EDamageType::Unspecified;
    this->ReactionAnim = NULL;
    this->ReactionBlendSpace = NULL;
    this->DeathAnim = NULL;
    this->DeathBlendSpace = NULL;
}

