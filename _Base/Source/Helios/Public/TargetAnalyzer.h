#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIAnalyzer.h"
#include "SharedDetectedObject.h"
#include "TargetAnalyzer.generated.h"

class UMultipleAttackAnalyzer;
class UPathFindingComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UTargetAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTargetableTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTargetablePawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCharacteristicsFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mTimeToForgetDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mNavBoundsCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIgnoreMultipleAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mDrawDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMultipleAttackAnalyzer* mTargetMultipleAttackAnalyzer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPathFindingComponent* mPathComponent;
    
public:
    UTargetAnalyzer();

protected:
    UFUNCTION()
    void OnObjectLost(FSharedDetectedObject DetectedObject);
    
    UFUNCTION()
    void OnObjectIdentified(FSharedDetectedObject DetectedObject);
    
    UFUNCTION()
    void OnObjectDetected(FSharedDetectedObject DetectedObject);
    
};

