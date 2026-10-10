#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "MaskData.h"
#include "MaskSystemDelegateDelegate.h"
#include "MaskSystem.generated.h"

UCLASS(Blueprintable)
class HELIOS_API UMaskSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaskSystemDelegate OnMaskChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaskSystemDelegate OnMaskTakeOff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentMaskUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CachedMaskUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> MaskNotificationMap;
    
public:
    UMaskSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TakeOffCurrentMask() const;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMaskUniqueId(const FName& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SaveMaskNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PutOnCurrentMask() const;
    
    UFUNCTION(BlueprintCallable)
    bool MarkMaskAsViewed(const FName& UniqueId);
    
    UFUNCTION(BlueprintPure)
    bool IsMaskViewed(const FName& UniqueId);
    
    UFUNCTION(BlueprintPure)
    bool IsMaskUnlocked(const FName& UniqueId);
    
    UFUNCTION(BlueprintPure)
    FMaskData GetMaskData(const FName& UniqueId) const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentMaskUniqueId() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCachedMaskUniqueId() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FMaskData> GetAllMasksData() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheCurrentMaskUniqueId(FName UniqueId);
    
};

