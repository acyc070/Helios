#include "HeliosNavlinkProxy.h"
#include "HeliosNavlinkComponent.h"

AHeliosNavlinkProxy::AHeliosNavlinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHeliosNavlinkComponent>(TEXT("NavLinkComponent"));
    this->mNavlinkComponent = (UHeliosNavlinkComponent*)RootComponent;
    this->mDeprecatedBy = NULL;
}


