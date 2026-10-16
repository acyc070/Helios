#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamingSystemsProjectSettings.generated.h"

class APawn;
class UStreamingSystemsProjectSettings;
class UWorld;

UCLASS(Blueprintable, Config=Game)
class HELIOS_API UStreamingSystemsProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> mLevelsOptedInForStreaming;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnableStreamingVolumes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<APawn>> mPawnClassesAlwaysActivatingStreamingVolumes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mAutomaticVolumeNeighboursPreloadingDepth;
    
    UStreamingSystemsProjectSettings();

    UFUNCTION(BlueprintPure)
    static UStreamingSystemsProjectSettings* GetStreamingProjectSettings();
    
};

