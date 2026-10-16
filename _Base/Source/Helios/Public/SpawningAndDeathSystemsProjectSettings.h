#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayFromHereRespawnBehavior.h"
#include "SpawningAndDeathSystemsProjectSettings.generated.h"

class AAISpawner;
class AControlledPawn;
class UDeathHandlerDataAsset;

UCLASS(Blueprintable, Config=Game)
class HELIOS_API USpawningAndDeathSystemsProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayFromHereRespawnBehavior mPIEPlayFromHereRespawnStrategy;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDeathAndRespawnFadeTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mCameraFadeHeadstartTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPostRespawnDelayBeforeFadeToGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<AControlledPawn>> mClassesTriggeringScreenFade;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAISpawner> mPlaypalDebugSpawner;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mRestartDeathHandler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDeathHandlerDataAsset> mDebugKillDeathHandler;
    
    USpawningAndDeathSystemsProjectSettings();

};

