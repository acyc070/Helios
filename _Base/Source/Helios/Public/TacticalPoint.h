#pragma once
#include "CoreMinimal.h"
#include "BaseAIPoint.h"
#include "ETacticalPointType.h"
#include "TacticalPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UTacticalPoint : public UBaseAIPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETacticalPointType mPointType;
    
    UTacticalPoint(const FObjectInitializer& ObjectInitializer);

};

