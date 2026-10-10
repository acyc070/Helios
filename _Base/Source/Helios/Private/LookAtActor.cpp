#include "LookAtActor.h"
#include "LookAtPoint.h"

ALookAtActor::ALookAtActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULookAtPoint>(TEXT("Root"));
    this->mLookAtPointComponent = (ULookAtPoint*)RootComponent;
}


