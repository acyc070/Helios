#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CollectibleCategoryData.h"
#include "CollectibleData.h"
#include "CollectibleProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UCollectibleProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectibleCategoryData> CollectibleCategoryList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectibleData> CollectibleList;
    
    UCollectibleProjectSettings();

};

