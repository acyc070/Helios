#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CarrySocket.h"
#include "EAttachPoint.h"
#include "AICarryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UAICarryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttachPoint, FCarrySocket> mCarrySockets;
    
public:
    UAICarryComponent(const FObjectInitializer& ObjectInitializer);

};

