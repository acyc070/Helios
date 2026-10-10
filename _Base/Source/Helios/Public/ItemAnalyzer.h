#pragma once
#include "CoreMinimal.h"
#include "AIAnalyzer.h"
#include "EItemTags.h"
#include "ItemAnalyzer.generated.h"

class UPlayerPickupInterface;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HELIOS_API UItemAnalyzer : public UAIAnalyzer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool mCheckForPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mMaxItemDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    TMap<EItemTags, float> mItemScorePerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mMaxProximityScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    float mPriorityScoreMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerPickupInterface* mPlayerPickupInterface;
    
public:
    UItemAnalyzer();

};

