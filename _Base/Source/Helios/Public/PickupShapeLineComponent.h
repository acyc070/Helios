#pragma once
#include "CoreMinimal.h"
#include "PickupLineData.h"
#include "PickupShapeComponent.h"
#include "PickupShapeLineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UPickupShapeLineComponent : public UPickupShapeComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupLineData mStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupLineData mEnd;
    
public:
    UPickupShapeLineComponent(const FObjectInitializer& ObjectInitializer);

};

