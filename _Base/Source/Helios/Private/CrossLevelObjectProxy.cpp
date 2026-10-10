#include "CrossLevelObjectProxy.h"
#include "Components/SceneComponent.h"

ACrossLevelObjectProxy::ACrossLevelObjectProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


