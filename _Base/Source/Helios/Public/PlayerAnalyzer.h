#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "PawnStateEvent.h"
#include "PlayerStuckAnalysisSettings.h"
#include "PlayerAnalyzer.generated.h"

class AControlledPawn;
class UWorldEventReceiver;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UPlayerAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mCheckPlayerCanBeReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mPathCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStuckAnalysisSettings mStuckSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AControlledPawn* mPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldEventReceiver* mSelfEventReceiver;
    
public:
    UPlayerAnalyzer();

private:
    UFUNCTION()
    void OnInworldPawnEvent(const FPawnStateEvent& PawnEvent, float Distance);
    
};

