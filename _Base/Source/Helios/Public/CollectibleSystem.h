#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "CollectibleData.h"
#include "ECollectibleCategory.h"
#include "ESaveDataCategory.h"
#include "CollectibleSystem.generated.h"

class UCollectibleSaveDataProxy;

UCLASS(Blueprintable)
class HELIOS_API UCollectibleSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataCategory, UCollectibleSaveDataProxy*> SaveDataProxies;
    
public:
    UCollectibleSystem();

    UFUNCTION(BlueprintPure)
    TArray<FCollectibleData> GetCollectibles(const ECollectibleCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    TSet<FName> GetCollected(const ECollectibleCategory Category) const;
    
    UFUNCTION(BlueprintCallable)
    void CollectActivity(const FName& UniqueId);
    
};

