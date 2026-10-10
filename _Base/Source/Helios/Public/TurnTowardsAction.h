#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIActionPattern.h"
#include "TurnTowardsAction.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UTurnTowardsAction : public UAIActionPattern {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mActorToTurnTowards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mLocationToTurnTowards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mDirectionToTurnTowards;
    
public:
    UTurnTowardsAction();

};

