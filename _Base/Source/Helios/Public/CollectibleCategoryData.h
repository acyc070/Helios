#pragma once
#include "CoreMinimal.h"
#include "ECollectibleCategory.h"
#include "ECollectibleSaveCategory.h"
#include "CollectibleCategoryData.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCollectibleCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectibleCategory CollectibleCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectibleSaveCategory CollectibleSaveCategory;
    
    FCollectibleCategoryData();
};

