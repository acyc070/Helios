#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrder.h"
#include "ESmartPointNavigationSelection.h"
#include "LocomotionState.h"
#include "AIScriptedSmartPointOrder.generated.h"

class UAINavigationOptionsData;
class USmartPoint;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedSmartPointOrder : public UAIScriptedOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointNavigationSelection mNavigationSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLookAtPoint;
    
    UAIScriptedSmartPointOrder();

};

