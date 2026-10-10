#pragma once
#include "CoreMinimal.h"
#include "HeliosNavModifierShape.h"
#include "HeliosNavModifierCapsule.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHeliosNavModifierCapsule : public UHeliosNavModifierShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRadius;
    
    UHeliosNavModifierCapsule();

};

