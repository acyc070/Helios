#include "AISpawner.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

AAISpawner::AAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAlwaysSpawnOnBeginPlay = false;
    this->mIgnoreIfCharacterExists = false;
    this->mDespawnPreviousCharacters = false;
    this->AI = NULL;
    this->AIController = NULL;
    this->StartSPNavMeshCheck = true;
    this->bCanUseSpawnAction = false;
    this->mSpawnActionLoopAnim = NULL;
    this->mSpawnActionExitAnim = NULL;
    this->bExitSpawnActionByProximity = false;
    this->mSpawnActionProximityDistance = 500.00f;
    this->bExitSpawnActionByDetection = false;
    this->mSpawnActionMovementRestriction = EMovementRestriction::RootMotionWithPhysics;
    this->mPawnReference = NULL;
}

AControlledPawn* AAISpawner::SpawnAI() {
    return NULL;
}



bool AAISpawner::HasSpawnedAI() const {
    return false;
}

AControlledPawn* AAISpawner::GetSpawnedAI() const {
    return NULL;
}

TSubclassOf<AControlledPawn> AAISpawner::GetAIClass() const {
    return NULL;
}

void AAISpawner::DespawnAI() {
}

bool AAISpawner::CanSpawnAI_Implementation() const {
    return false;
}


