#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseGrabbableComponent.h"
#include "EClimbRestrictions.h"
#include "ObjectSelectionPriority.h"
#include "ClimbableBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UClimbableBaseComponent : public UBaseGrabbableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClimbRestrictions mRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectSelectionPriority mSelectionPriorityBoost;
    
public:
    UClimbableBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool GetClosestLocationInfo(const FVector& TargetLocation, bool mustBeClimbable, float minimumDistanceFromEdge, FVector& OutLocation, FVector& outForward) const;
    
};

