#pragma once
#include "CoreMinimal.h"
#include "CollisionStatusBackup.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCollisionStatusBackup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* mComponent;
    
    HELIOS_API FCollisionStatusBackup();
};

