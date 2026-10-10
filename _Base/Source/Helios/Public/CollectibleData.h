#pragma once
#include "CoreMinimal.h"
#include "ECollectibleCategory.h"
#include "CollectibleData.generated.h"

class UActivityData;
class UDataAsset;

USTRUCT(BlueprintType)
struct HELIOS_API FCollectibleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectibleCategory CollectibleCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityData* ActivityAsset;
    
    FCollectibleData();
};

