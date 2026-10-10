#include "GrabbableLedgeActor.h"
#include "GrabbableLedgeComponent.h"

AGrabbableLedgeActor::AGrabbableLedgeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGrabbableLedgeComponent>(TEXT("LedgeComponent"));
    this->mLedgeComponent = (UGrabbableLedgeComponent*)RootComponent;
}


