#pragma once
#include "CoreMinimal.h"
#include "HeliosNavModifierShape.h"
#include "HeliosNavModifierSphere.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHeliosNavModifierSphere : public UHeliosNavModifierShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRadius;
    
    UHeliosNavModifierSphere();

};

