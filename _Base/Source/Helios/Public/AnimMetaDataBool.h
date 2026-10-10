#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "AnimMetaDataBool.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UAnimMetaDataBool : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BoolMap;
    
    UAnimMetaDataBool();

};

