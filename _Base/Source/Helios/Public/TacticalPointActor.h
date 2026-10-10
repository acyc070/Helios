#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TacticalPointActor.generated.h"

class UTacticalPoint;

UCLASS(Blueprintable)
class HELIOS_API ATacticalPointActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTacticalPoint* mTacticalPointComponent;
    
    ATacticalPointActor(const FObjectInitializer& ObjectInitializer);

};

