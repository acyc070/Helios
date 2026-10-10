#include "SmartPointActor.h"
#include "SavableChalkboardComponent.h"
#include "SmartPoint.h"

ASmartPointActor::ASmartPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USmartPoint>(TEXT("SmartPointComponent"));
    this->mSmartPointComponent = (USmartPoint*)RootComponent;
    this->mArrowComponent = NULL;
    this->mBillboardComponent = NULL;
    this->mSavableChalkboardComponent = CreateDefaultSubobject<USavableChalkboardComponent>(TEXT("SavableChalkboard"));
}


