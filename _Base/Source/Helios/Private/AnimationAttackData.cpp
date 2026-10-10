#include "AnimationAttackData.h"

FAnimationAttackData::FAnimationAttackData() {
    this->mEnemyCurrentlyAttacking = NULL;
    this->mAttackIndex = 0;
    this->mAttackAngle = 0.00f;
    this->mDistanceAttackingEnemy = 0.00f;
    this->mCurrentLeanAmount = 0.00f;
    this->mIsBroken = false;
    this->mEnemyIsHit = false;
    this->mMoveStartTargetAngle = 0.00f;
    this->mMoveOnAttackFinish = false;
    this->mAttackInterfaceActive = false;
    this->mIsAttackTransitioning = false;
    this->mHasBladeUp = false;
    this->mAttackStrikePlayRate = 0.00f;
    this->mRotationBlocked = false;
    this->mCurrentAttackState = EAttackState::WaitingForInput;
    this->mCurrentHitState = EWeaponHitState::Hit;
    this->mCurrentStruggleOutcome = EStruggleOutcome::Nothing;
}

