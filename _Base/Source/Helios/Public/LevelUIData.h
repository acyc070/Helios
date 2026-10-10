#pragma once
#include "CoreMinimal.h"
#include "LevelUIData.generated.h"

class UMaterialInstance;
class UWorld;

USTRUCT(BlueprintType)
struct HELIOS_API FLevelUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> mLevelAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* mLevelMaterialTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* mSaveSlotMaterial;
    
    FLevelUIData();
};

