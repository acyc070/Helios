#include "TacticalPointActor.h"
#include "TacticalPoint.h"

ATacticalPointActor::ATacticalPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UTacticalPoint>(TEXT("Root"));
    this->mTacticalPointComponent = (UTacticalPoint*)RootComponent;
}


