#include "HeliosActor.h"
#include "ObjectPropertiesComponent.h"

AHeliosActor::AHeliosActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mObjectProperties = CreateDefaultSubobject<UObjectPropertiesComponent>(TEXT("ObjectProperties"));
}


