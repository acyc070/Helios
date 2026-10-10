#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BIKRigBoneReference.h"
#include "BIKRigGoalComponent.h"
#include "BIKRigLookAtGoalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BIKRIG_API UBIKRigLookAtGoalComponent : public UBIKRigGoalComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBIKRigBoneReference LookBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalLookDirection;
    
    UBIKRigLookAtGoalComponent(const FObjectInitializer& ObjectInitializer);

};

