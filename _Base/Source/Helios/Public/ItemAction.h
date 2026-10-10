#pragma once
#include "CoreMinimal.h"
#include "AIActionPattern.h"
#include "EAIItemInteraction.h"
#include "ItemAction.generated.h"

class UPickupComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UItemAction : public UAIActionPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIItemInteraction mItemAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupComponent* mItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mActionDuration;
    
    UItemAction();

};

