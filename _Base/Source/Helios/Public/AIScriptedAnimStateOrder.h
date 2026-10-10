#pragma once
#include "CoreMinimal.h"
#include "AIAnimStateOptions.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "CustomAnimationOptions.h"
#include "EPawnType.h"
#include "SoftEnumName.h"
#include "AIScriptedAnimStateOrder.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedAnimStateOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName AnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* towardsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnType TowardsPawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAnimStateOptions Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useCustomAnimationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomAnimationOptions CustomAnimationOptions;
    
    UAIScriptedAnimStateOrder();

};

