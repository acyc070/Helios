#pragma once
#include "CoreMinimal.h"
#include "EIKTaskIdentifier.h"
#include "GoInvestigateVolumeAction.h"
#include "GrabUnderTheBedPattern.generated.h"

class AControlledPawn;
class UGrabActorComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGrabUnderTheBedPattern : public UGoInvestigateVolumeAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIKTaskIdentifier mIKIDTask;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mTargetCPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrabActorComponent* mGrabActorComponent;
    
public:
    UGrabUnderTheBedPattern();

};

