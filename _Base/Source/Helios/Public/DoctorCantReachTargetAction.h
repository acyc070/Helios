#pragma once
#include "CoreMinimal.h"
#include "CantReachTargetAction.h"
#include "DoctorCantReachTargetAction.generated.h"

class UGoUseSmartPointAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UDoctorCantReachTargetAction : public UCantReachTargetAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGoUseSmartPointAction* mGoSmartPointPattern;
    
public:
    UDoctorCantReachTargetAction();

};

