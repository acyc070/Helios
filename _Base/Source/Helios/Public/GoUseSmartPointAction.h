#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "ESmartPointNavigationSelection.h"
#include "LocomotionState.h"
#include "GoUseSmartPointAction.generated.h"

class UAINavigationOptionsData;
class ULookAction;
class UMoveToLocationAction;
class USmartPoint;
class UUseSmartPointAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoUseSmartPointAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartPoint* mSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointNavigationSelection mNavigationSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAINavigationOptionsData* mNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionState mLocomotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mClearMovementOnTermination;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMoveToLocationAction* mMovePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUseSmartPointAction* mUsePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUseSmartPointAction* mPreviousUsePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULookAction* mLookAction;
    
public:
    UGoUseSmartPointAction();

private:
    UFUNCTION()
    void OnPointToggled(USmartPoint* Point, bool Enabled);
    
};

