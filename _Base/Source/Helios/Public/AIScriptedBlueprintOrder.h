#pragma once
#include "CoreMinimal.h"
#include "AIScriptedOrderThatIsSmartPointCompatible.h"
#include "AIScriptedBlueprintOrder.generated.h"

class APawn;
class UAIAnimator;
class UAILookinator;
class UAINavigator;
class UAIPatternBrain;
class UChalkboardWrapper;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HELIOS_API UAIScriptedBlueprintOrder : public UAIScriptedOrderThatIsSmartPointCompatible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* mAIChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAIAnimator* mAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAINavigator* mNavigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    APawn* mPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAILookinator* mLookinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAIPatternBrain* mBrain;
    
    UAIScriptedBlueprintOrder();

    UFUNCTION(BlueprintCallable)
    void TerminateOrder(bool successful);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExecuteOrder();
    
};

