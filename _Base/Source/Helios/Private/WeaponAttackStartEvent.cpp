#include "WeaponAttackStartEvent.h"

FWeaponAttackStartEvent::FWeaponAttackStartEvent() {
    this->mActorUsingWeapon = NULL;
    this->mAttackRange = 0.00f;
    this->mOptionalActorGettingAttacked = NULL;
}

