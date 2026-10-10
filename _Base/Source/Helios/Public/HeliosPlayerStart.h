#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "DLCTag.h"
#include "PlayerStartEventDelegate.h"
#include "HeliosPlayerStart.generated.h"

class AAISpawner;
class AActor;
class ACrossLevelObjectProxy;
class AHeliosPlayerStart;
class UBlueprintCondition;
class UObject;

UCLASS(Blueprintable)
class HELIOS_API AHeliosPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsSublevelDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCTag mDLCTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawner*> mLinkedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UObject>, UBlueprintCondition*> mConditionallyAvailableProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<ACrossLevelObjectProxy>> mAvailableProxies;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStartEvent OnPlayerSpawnedHere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mGlobalAudioEventAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAudioFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> mExternalCamera;
    
    AHeliosPlayerStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void Teleport(int32 choice, AHeliosPlayerStart* teleportLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentCheckpoint() const;
    
    UFUNCTION(BlueprintPure)
    FDLCTag GetDLCTag() const;
    
};

