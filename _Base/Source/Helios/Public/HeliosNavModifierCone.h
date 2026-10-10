#pragma once
#include "CoreMinimal.h"
#include "HeliosNavModifierShape.h"
#include "HeliosNavModifierCone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHeliosNavModifierCone : public UHeliosNavModifierShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mLength;
    
    UHeliosNavModifierCone();

};

