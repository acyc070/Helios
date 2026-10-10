#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIAnalyzer.h"
#include "ChalkboardSectionKey.h"
#include "ESmartPointType.h"
#include "SmartPointAnalyserSettings.h"
#include "SoftEnumName.h"
#include "SmartPointAnalyzer.generated.h"

class APawn;
class UAINavigator;
class UChalkboardWrapper;
class USmartPoint;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API USmartPointAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartPointAnalyserSettings mSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartPointType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftEnumName mCustomSmartPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mOverrideDefaultKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIgnorePreviousPointFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseCustomEvaluationFunction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UChalkboardWrapper* AIChalkboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    UAINavigator* Navigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USmartPoint* mNextSmartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* mOwnerClass;
    
public:
    USmartPointAnalyzer();

protected:
    UFUNCTION(BlueprintNativeEvent)
    float EvaluateSmartPoint(USmartPoint* SmartPoint);
    
    UFUNCTION(BlueprintPure)
    float CalculateTimeWeight(USmartPoint* Point) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateDirectionWeight(USmartPoint* Point, const FVector& WanderDirection) const;
    
};

