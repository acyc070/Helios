#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BIKRigGoalComponent.generated.h"

class UBIKRig;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BIKRIG_API UBIKRigGoalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBIKRig* Rig;
    
    UBIKRigGoalComponent(const FObjectInitializer& ObjectInitializer);

};

