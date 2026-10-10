#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "GenericGameEvent.h"
#include "MovementAnalysisSettings.h"
#include "WeaponAttackStartEvent.h"
#include "SelfAnalyzer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API USelfAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mNavlinkApproachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementAnalysisSettings mMovementSettings;
    
public:
    USelfAnalyzer();

private:
    UFUNCTION()
    void OnWeaponAttackDangerEvent(const FWeaponAttackStartEvent& DangerEvent, float EventDistance);
    
    UFUNCTION()
    void OnPawnTouchEvent(const FGenericGameEvent& gameEvent);
    
    UFUNCTION()
    void OnPathCleared();
    
};

