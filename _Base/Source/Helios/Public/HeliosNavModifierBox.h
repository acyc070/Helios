#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HeliosNavModifierShape.h"
#include "HeliosNavModifierBox.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UHeliosNavModifierBox : public UHeliosNavModifierShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mExtents;
    
    UHeliosNavModifierBox();

};

