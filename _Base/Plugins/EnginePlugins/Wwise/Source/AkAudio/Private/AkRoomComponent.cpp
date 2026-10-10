#include "AkRoomComponent.h"

UAkRoomComponent::UAkRoomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = true;
    this->NextLowerPriorityComponent = NULL;
    this->Priority = 0.00f;
    this->WallOcclusion = 1.00f;
    this->AuxSendLevel = 0.00f;
    this->AutoPost = false;
}


