#include "PlaypalRespawnPoint.h"
#include "Components/SceneComponent.h"

APlaypalRespawnPoint::APlaypalRespawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->mDefaultSceneRoot = (USceneComponent*)RootComponent;
    this->mBillboardComponent = NULL;
}


