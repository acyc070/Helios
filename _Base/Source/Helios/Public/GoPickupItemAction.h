#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "GoPickupItemAction.generated.h"

class UPickupComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UGoPickupItemAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupComponent* mItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPickupOffset;
    
    UGoPickupItemAction();

};

