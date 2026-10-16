#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapManager.generated.h"

class UWorld;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class MAPMANAGERRUNTIME_API UMapManager : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UWorld>> mLevels;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> mMainMenuLevel;
    
    UMapManager();

};

