#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IdleAnimationSetupData.h"
#include "IdleAnimationsDataAsset.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UIdleAnimationsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIdleAnimationSetupData> mIdleAnimationSetupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIdleAnimationSetupData> mIdleAnimationSetupMap;
    
    UIdleAnimationsDataAsset();

};

