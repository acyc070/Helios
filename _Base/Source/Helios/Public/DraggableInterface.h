#pragma once
#include "CoreMinimal.h"
#include "GrabbableInterface.h"
#include "DraggableInterface.generated.h"

UINTERFACE()
class HELIOS_API UDraggableInterface : public UGrabbableInterface {
    GENERATED_BODY()
};

class HELIOS_API IDraggableInterface : public IGrabbableInterface {
    GENERATED_BODY()
public:
};

