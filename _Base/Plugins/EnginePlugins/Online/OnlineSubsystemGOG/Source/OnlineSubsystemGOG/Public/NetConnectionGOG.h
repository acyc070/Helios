#pragma once
#include "CoreMinimal.h"
#include "Engine/NetConnection.h"
#include "NetConnectionGOG.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetConnectionGOG : public UNetConnection {
    GENERATED_BODY()
public:
    UNetConnectionGOG();

};

