#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "ActivityResumeRequest.h"
#include "EActivityAvailability.h"
#include "EActivityEndReason.h"
#include "ActivitySystem.generated.h"

class UActivityData;

UCLASS(Blueprintable)
class HELIOS_API UActivitySystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityResumeRequest> CurrentActivityRequests;
    
    UActivitySystem();

    UFUNCTION(BlueprintCallable)
    void UnBindActivityDelegates();
    
    UFUNCTION(BlueprintCallable)
    void StartActivity(UActivityData* InActivity);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityAvailability(UActivityData* InActivity, EActivityAvailability InAvailability);
    
    UFUNCTION(BlueprintCallable)
    void ResumeActivity(UActivityData* InActivity);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActivities();
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(UActivityData* InActivity, EActivityEndReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentActivityRequests();
    
    UFUNCTION(BlueprintCallable)
    void BindActivityDelegates();
    
};

