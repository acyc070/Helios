#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIScriptedOrder.h"
#include "LocomotionState.h"
#include "AIScriptedMoveOrder.generated.h"

class AActor;
class UAINavigationOptionsData;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedMoveOrder : public UAIScriptedOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* targetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionMode;
    
    UAIScriptedMoveOrder();

};

